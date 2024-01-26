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

#define ECSPI_MASTER_CLK_FREQ                                                                 \
    (CLOCK_GetPllFreq(kCLOCK_SystemPll1Ctrl) / (CLOCK_GetRootPreDivider(kCLOCK_RootEcspi2)) / \
     (CLOCK_GetRootPostDivider(kCLOCK_RootEcspi2)))

#define TRANSFER_BAUDRATE 500000U
#define SYS_INCREMENTATOR_SPEED 2000000U

#define CHANNELS_COUNT 8

void writeDataToSharedMemory(uint32_t *data);
void writeDataToMemory(uint32_t *addr, uint32_t data);


void start2MHzTimer();
void setupECSPI2();
uint32_t createADCReadCommand(uint32_t channel);
uint32_t readADCbyChannel(uint32_t channel);
uint32_t* readAllChannels(uint32_t channelsCount, uint32_t *adcChannelValues);

void writeDataToMemory(uint32_t *addr, uint32_t data)
{
    *addr = data;
}

void writeDataToSharedMemory(uint32_t *data)
{
    uint32_t *sharedMemoryPtr = (uint32_t*)0x80000000;
    memcpy(sharedMemoryPtr, data, 4);
}

void writeToSharedMemoryFrom(char *startByte, uint32_t size)
{
    char *sharedMemoryPtr = (char*)0x80000000;
    memcpy(sharedMemoryPtr, startByte, size);
}

void setupECSPI2()
{
    ecspi_master_config_t masterConfig;
    ECSPI_MasterGetDefaultConfig(&masterConfig);
    masterConfig.channelConfig.phase    = kECSPI_ClockPhaseFirstEdge;
    masterConfig.channelConfig.polarity = kECSPI_PolarityActiveLow;
    
    masterConfig.channelConfig.chipSlectActiveState  = kECSPI_ChipSelectActiveStateLow;
    masterConfig.channelConfig.clockInactiveState    = kECSPI_ClockInactiveStateHigh;
    masterConfig.channelConfig.dataLineInactiveState = kECSPI_DataLineInactiveStateLow;

    masterConfig.burstLength = 16;
   
    masterConfig.txFifoThreshold = 1;
    masterConfig.rxFifoThreshold = 0;
    
    gpio_pin_config_t pdrstConfig = { kGPIO_DigitalOutput, 0, kGPIO_NoIntmode };
    GPIO_PinInit(GPIO2, 12U, &pdrstConfig);
    GPIO_PinWrite(GPIO2, 12U, 1U);

    ECSPI_MasterInit(ECSPI2, &masterConfig, ECSPI_MASTER_CLK_FREQ);
    ECSPI2->CONFIGREG |= ECSPI_CONFIGREG_SS_CTL(1); //DONT TOUCH!

}

void start2MHzTimer()
{
    gpt_config_t gptConfig;

    GPT_GetDefaultConfig(&gptConfig);
    //gptConfig.clockSource = kGPT_ClockSource_Osc;
    gptConfig.clockSource = kGPT_ClockSource_HighFreq;
    gptConfig.enableFreeRun = true;

    GPT_Init(GPT1, &gptConfig);

    GPT_SetClockDivider(GPT1, 50);

    GPT_StartTimer(GPT1);
}

uint32_t createADCReadCommand(uint32_t channel) 
{
    uint32_t commandReadADC = 1 << 15;
    commandReadADC |= 1 << (13 - channel);
    return (commandReadADC << 16) | commandReadADC;
}

uint32_t readADCbyChannel(uint32_t channel)
{
    ecspi_transfer_t masterXfer;

    uint32_t command = createADCReadCommand(channel);
    uint32_t rxData = 0;

    masterXfer.txData   = &command;
    masterXfer.rxData   = &rxData;
    masterXfer.dataSize = 1;
    masterXfer.channel  = kECSPI_Channel0;

    ECSPI_MasterTransferBlocking(ECSPI2, &masterXfer);

    return rxData;
}

uint32_t* readAllChannels(uint32_t channelsCount, uint32_t *adcChannelValues) 
{
    uint32_t i = 0;
    for(; i < channelsCount - 2; i++) {
        adcChannelValues[i] = readADCbyChannel(i);
    }
    for(; i < channelsCount; i++) {
        adcChannelValues[i] = readADCbyChannel(0);
    }
    return adcChannelValues;
}

int main(void)
{
    /* M7 has its local cache and enabled by default,
     * need to set smart subsystems (0x28000000 ~ 0x3FFFFFFF)
     * non-cacheable before accessing this address region */
    BOARD_InitMemory();

    /* Board specific RDC settings */
    BOARD_RdcInit();

    BOARD_InitBootPins();
    BOARD_BootClockRUN();
    BOARD_InitDebugConsole();

    CLOCK_SetRootMux(kCLOCK_RootEcspi2, kCLOCK_EcspiRootmuxSysPll1); /* Set ECSPI2 source to SYSTEM PLL1 800MHZ */
    //CLOCK_SetRootDivider(kCLOCK_RootEcspi2, 10U, 4U);                 /* Set root clock to 800MHZ / 10 = 80MHZ */ 


    CLOCK_SetRootMux(kCLOCK_RootGpt1, kCLOCK_GptRootmuxSysPll1Div2); /* Set GPT1 source to SYSTEM PLL1 DIV2 400MHZ */
    CLOCK_SetRootDivider(kCLOCK_RootGpt1, 1U, 4U);                   /* Set root clock to 400MHZ / 4 = 100MHZ */

    start2MHzTimer();

    setupECSPI2();

    uint8_t nullizator[128] = {0};    
    writeToSharedMemoryFrom((char*)nullizator, sizeof(nullizator));


    while(1) {
        uint32_t adcValues[CHANNELS_COUNT + 2] = {0};
        readAllChannels(CHANNELS_COUNT + 2, adcValues);
        //writeToSharedMemoryFrom(adcValues + 2, CHANNELS_COUNT * sizeof(adcValues[0]));

        // uint32_t adcValue = readADCbyChannel(6);
        // writeDataToMemory(0x80000000, adcValue);
        
        uint32_t counter = GPT_GetCurrentTimerCount(GPT1);
        writeDataToMemory(0x80000000, counter);
    }

    return 0;
}