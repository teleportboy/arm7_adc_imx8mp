/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_device_registers.h"
#include "fsl_debug_console.h"
#include "fsl_ecspi.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"
#include "fsl_gpio.h"
#include "fsl_gpt.h"
#include "./adc/ads8028.h"

#define ECSPI_MASTER_CLK_FREQ                                                                 \
    (CLOCK_GetPllFreq(kCLOCK_SystemPll1Ctrl) / (CLOCK_GetRootPreDivider(kCLOCK_RootEcspi2)) / \
     (CLOCK_GetRootPostDivider(kCLOCK_RootEcspi2)))

#define TRANSFER_BAUDRATE 5000000U
#define SYS_INCREMENTATOR_SPEED 2000000U

#define CHANNELS_COUNT 8

typedef struct shared_data {
    uint32_t counter;
    uint32_t adcCount;
    uint32_t timer;
    uint32_t dig;
    uint32_t rot;
    uint32_t depa;
    uint32_t depb;
    uint32_t adcValues[CHANNELS_COUNT];
} shared_data;


void writeDataToMemory(uint32_t *addr, uint32_t data);
void writeToSharedMemoryFrom(char *startByte, uint32_t size);

void start2MHzTimer();
void setupECSPI2();
void setupDigitalInputs();

void setupECSPI2()
{
    CLOCK_SetRootMux(kCLOCK_RootEcspi2, kCLOCK_EcspiRootmuxSysPll1);
    CLOCK_SetRootDivider(kCLOCK_RootEcspi2, 8U, 20U); //20mhz

    ecspi_master_config_t masterConfig;
    ECSPI_MasterGetDefaultConfig(&masterConfig);
    masterConfig.channelConfig.phase    = kECSPI_ClockPhaseFirstEdge;
    masterConfig.channelConfig.polarity = kECSPI_PolarityActiveLow;
    
    masterConfig.channelConfig.chipSlectActiveState  = kECSPI_ChipSelectActiveStateLow;
    masterConfig.channelConfig.clockInactiveState    = kECSPI_ClockInactiveStateHigh;
    masterConfig.channelConfig.dataLineInactiveState = kECSPI_DataLineInactiveStateLow;

    masterConfig.burstLength = 16;
   
    masterConfig.txFifoThreshold = 0;
    masterConfig.rxFifoThreshold = 1;

    masterConfig.chipSelectDelay = 16;

    //masterConfig.baudRate_Bps = TRANSFER_BAUDRATE;
    
    gpio_pin_config_t pdrstConfig = { kGPIO_DigitalOutput, 0, kGPIO_NoIntmode };
    GPIO_PinInit(GPIO2, 12, &pdrstConfig);
    GPIO_PinWrite(GPIO2, 12, 1);

    ECSPI_MasterInit(ECSPI2, &masterConfig, ECSPI_MASTER_CLK_FREQ);
    ECSPI2->CONFIGREG |= ECSPI_CONFIGREG_SS_CTL(1); //DONT TOUCH!
}

void setupDigitalInputs()
{
    gpio_pin_config_t dig = { kGPIO_DigitalOutput, 0, kGPIO_NoIntmode };
    GPIO_PinInit(GPIO4, 12, &dig);
    //GPIO_PinWrite(GPIO4, 12, 1);

    gpio_pin_config_t rot = { kGPIO_DigitalInput, 0, kGPIO_NoIntmode };
    GPIO_PinInit(GPIO4, 19, &rot);
    //GPIO_PinWrite(GPIO4, 19, 1);

    gpio_pin_config_t depa = { kGPIO_DigitalOutput, 0, kGPIO_NoIntmode };
    GPIO_PinInit(GPIO4, 20, &depa);
    //GPIO_PinWrite(GPIO4, 20, 1);

    gpio_pin_config_t depb = { kGPIO_DigitalInput, 0, kGPIO_NoIntmode };
    GPIO_PinInit(GPIO4, 21, &depb);
    //GPIO_PinWrite(GPIO4, 21, 1);
}

void start2MHzTimer()
{
    
    CLOCK_SetRootMux(kCLOCK_RootGpt1, kCLOCK_GptRootmuxSysPll1Div20);
    CLOCK_SetRootDivider(kCLOCK_RootGpt1, 4U, 5U); //2mhz

    gpt_config_t gptConfig;

    GPT_GetDefaultConfig(&gptConfig);
    //gptConfig.clockSource = kGPT_ClockSource_Osc;
    gptConfig.clockSource = kGPT_ClockSource_HighFreq;
    gptConfig.enableFreeRun = true;

    GPT_Init(GPT1, &gptConfig);
    
    // GPT_SetClockDivider(GPT1, 50); // 100 / 50 = 2mhz

    GPT_StartTimer(GPT1);
}

int main(void)
{
    BOARD_InitMemory();
    BOARD_RdcInit();

    BOARD_InitBootPins();
    BOARD_BootClockRUN();
    BOARD_InitDebugConsole();                

    start2MHzTimer();
    setupECSPI2();
    setupDigitalInputs();

    uint8_t nullizator[128] = {0};    
    writeToSharedMemoryFrom((char*)nullizator, sizeof(nullizator));

    shared_data *data = (shared_data*)0x80000000;
    while(1) {      
        data->counter++;  
        data->timer = GPT_GetCurrentTimerCount(GPT1);
        
        data->dig = GPIO_PinRead(GPIO4, 12);
        data->rot = GPIO_PinRead(GPIO4, 19);
        data->depa = GPIO_PinRead(GPIO4, 20);
        data->depb = GPIO_PinRead(GPIO4, 21);

        if(readAllChannels(CHANNELS_COUNT, data->adcValues)) {
            data->adcCount++;
        }
    }

    return 0;
}