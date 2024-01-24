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


// rewerse print
// 0x41C3 0x3C1F 0x63F9 0x2DB9 0x3D00 0xB058 0xE16B 0x84B3 0xAF92 0xA361 0xC666 0x9E36 0x3E0B 0x5312 0x1AD7 0xC23B 0x408B 0xC797 0x5F47 0xE900 0xD2FD 0xF13 0x474E 0xB426
// 0xCD9C 0x4BB6 0x6AFF 0x6DE7 0x0 0x0 0x0 0x1 0x0 0x11E1 0x0 0x1201 0x0 0x0 0x0 0x4 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0


/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define EXAMPLE_ECSPI_MASTER_BASEADDR ECSPI2
#define EXAMPLE_ECSPI_DEALY_COUNT     10000000U
#define ECSPI_MASTER_CLK_FREQ                                                                 \
    (CLOCK_GetPllFreq(kCLOCK_SystemPll1Ctrl) / (CLOCK_GetRootPreDivider(kCLOCK_RootEcspi2)) / \
     (CLOCK_GetRootPostDivider(kCLOCK_RootEcspi2)))
#define TRANSFER_SIZE     16U     /*! Transfer dataSize */
#define TRANSFER_BAUDRATE 20000000U /*! Transfer baudrate - 500k */

#define ECSPI2_STATUS_REGISTR 0x30830018
#define ECSPI2_TEST_REGISTR 0x30830020
#define ECSPI2_DMA_REGISTR 0x30830014

void writeDataToSharedMemory(uint32_t *data);
void writeDataToMemory(uint32_t *addr, uint32_t data);
void sleep(uint32_t ms);

/*******************************************************************************
 * Variables
 ******************************************************************************/
uint32_t masterRxData[TRANSFER_SIZE] = {0U};
uint32_t masterTxData[TRANSFER_SIZE] = {0U};
volatile uint32_t g_systickCounter   = 20U;
/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/
void SysTick_Handler()
{
    if(g_systickCounter != 0U) {
        g_systickCounter--;
    }
}


void sleep(uint32_t ms)
{
    if(SysTick_Config(SystemCoreClock / 1000U)) {
        //while(1) { }
    }

    g_systickCounter = ms;
    while(g_systickCounter != 0U) {}
}

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
    CLOCK_SetRootDivider(kCLOCK_RootEcspi2, 2U, 5U);                 /* Set root clock to 800MHZ / 10 = 80MHZ */

    //PRINTF("ECSPI board to board polling example.\r\n");
    //PRINTF("This example use one board as master and another as slave.\r\n");
    //PRINTF("Master uses polling way and slave uses interrupt way. \r\n");
    //PRINTF("Please make sure you make the correct line connection. Basically, the connection is: \r\n");
    //PRINTF("ECSPI_master -- ECSPI_slave   \r\n");
    //PRINTF("   CLK      --    CLK  \r\n");
    //PRINTF("   PCS      --    PCS \r\n");
    //PRINTF("   MOSI     --    MOSI \r\n");
    //PRINTF("   MISO     --    MISO  \r\n");
    //PRINTF("   GND      --    GND \r\n");

    //uint32_t errorCount;
    uint32_t loopCount = 1U;
    //uint32_t i;
    ecspi_master_config_t masterConfig;
    ecspi_transfer_t masterXfer;

    uint8_t nullizator[128] = {0};

    /* Master config:
     * masterConfig.channel = kECSPI_Channel0;
     * masterConfig.burstLength = 8;
     * masterConfig.samplePeriodClock = kECSPI_spiClock;
     * masterConfig.baudRate_Bps = TRANSFER_BAUDRATE;
     * masterConfig.chipSelectDelay = 0;
     * masterConfig.samplePeriod = 0;
     * masterConfig.txFifoThreshold = 3;
     * masterConfig.rxFifoThreshold = 0;
     */
    ECSPI_MasterGetDefaultConfig(&masterConfig);
    masterConfig.channelConfig.phase = kECSPI_ClockPhaseFirstEdge;
    masterConfig.channelConfig.polarity = kECSPI_PolarityActiveLow;
    
    masterConfig.channelConfig.chipSlectActiveState = kECSPI_ChipSelectActiveStateLow;
    masterConfig.channelConfig.clockInactiveState    = kECSPI_ClockInactiveStateHigh;
    masterConfig.channelConfig.dataLineInactiveState = kECSPI_DataLineInactiveStateLow;

    masterConfig.burstLength = 16;
   
    masterConfig.txFifoThreshold = 1;
    masterConfig.rxFifoThreshold = 0;

    // ECSPI->CONFIGREG |= 
    //masterConfig.enableLoopback = true;
    //masterConfig.baudRate_Bps = TRANSFER_BAUDRATE;
    
    gpio_pin_config_t pdrst_config = {kGPIO_DigitalOutput, 0, kGPIO_NoIntmode};
    GPIO_PinInit(GPIO2, 12U, &pdrst_config);
    GPIO_PinWrite(GPIO2, 12U, 1U);
    // gpio_pin_config_t cs_config = {kGPIO_DigitalOutput, 0, kGPIO_NoIntmode};
    // GPIO_PinInit(GPIO5, 13U, &cs_config);
    // GPIO_PinWrite(GPIO5, 13U, 1);
    ECSPI_MasterInit(EXAMPLE_ECSPI_MASTER_BASEADDR, &masterConfig, ECSPI_MASTER_CLK_FREQ);
    ECSPI2->CONFIGREG |= ECSPI_CONFIGREG_SS_CTL(1);
    //ECSPI2->CONREG = 0x00F030F1;
    
   //0111 0000 0011 0000 1111 0001 
   //0111 0000 0100 0010 0001 1001 

    //volatile uint32_t* startReadAdress = (uint32_t*)0x30330014;
    //volatile uint32_t* startWriteAdress = (uint32_t*)0x80000000;

    for(uint32_t i = 0; i < 100; i++) {
        //startWriteAdress[i] = startReadAdress[i];
    }

    //uint32_t data = 241732;
    //writeDataToSharedMemory(&data);
    //PRINTF("a");
    //writeDataToMemory((uint32_t*)ECSPI2_DMA_REGISTR, 0x4);
    
    //uint32_t *some_reg = (uint32_t*)ECSPI2_DMA_REGISTR;
    //writeDataToSharedMemory(some_reg);
    writeToSharedMemoryFrom((char*)nullizator, sizeof(nullizator));
    sleep(100);
    while(1) {
        //writeDataToMemory((uint32_t*)ECSPI2_TEST_REGISTR, 0x17);
        //writeDataToSharedMemory(some_reg);
        /* Set up the transfer data */
        for(int i = 0U; i < TRANSFER_SIZE; i++) {
            masterTxData[i] = 0xA000A000;
            //masterTxData[i] = 0U;
            masterRxData[i] = 0;
        }

        //sleep(200);
        /* Start master transfer, send data to slave */
        masterXfer.txData   = masterTxData;
        masterXfer.rxData   = masterRxData;
        masterXfer.dataSize = TRANSFER_SIZE;
        masterXfer.channel  = kECSPI_Channel0;
        //ECSPI_MasterTransferBlocking(EXAMPLE_ECSPI_MASTER_BASEADDR, &masterXfer);
        // sleep(20);
        // res = (uint32_t)ECSPI_MasterTransferBlocking(EXAMPLE_ECSPI_MASTER_BASEADDR, &masterXfer);
        // sleep(20);
        // res = (uint32_t)ECSPI_MasterTransferBlocking(EXAMPLE_ECSPI_MASTER_BASEADDR, &masterXfer);
        //res = 111;
        //writeDataToMemory(0x80000000, res);
        //sleep(2000);
        //writeDataToSharedMemory(&res);
        (uint32_t)ECSPI_MasterTransferBlocking(EXAMPLE_ECSPI_MASTER_BASEADDR, &masterXfer);

        writeToSharedMemoryFrom((char*)masterRxData, TRANSFER_SIZE * sizeof(masterXfer.rxData[0]));
        // sleep(777);

        // uint32_t bibaboba = 2323;
        // writeDataToSharedMemory(&bibaboba);
        // sleep(232);

        // /* Start master transfer, receive data from slave */
        // masterXfer.txData   = NULL;
        // masterXfer.rxData   = masterRxData;
        // masterXfer.dataSize = TRANSFER_SIZE;
        // masterXfer.channel  = kECSPI_Channel0;
        // //PRINTF("Start receive data from slave.\r\n");
        // res = (uint32_t)ECSPI_MasterTransferBlocking(EXAMPLE_ECSPI_MASTER_BASEADDR, &masterXfer);
        // writeDataToSharedMemory(&res);
        
        // for(uint32_t i = 0; i < TRANSFER_SIZE; i++) {
        //     //sleep(1000);
        //     //writeDataToSharedMemory(&masterXfer.rxData[i]);
        // }

        // errorCount = 0U;
        // for (i = 0U; i < TRANSFER_SIZE; i++)
        // {
        //     if (masterTxData[i] != masterRxData[i])
        //     {
        //         errorCount++;
        //         writeDataToSharedMemory(&errorCount);
        //     }
        // }

        // if (errorCount == 0U)
        // {
        //     //PRINTF(" \r\nECSPI transfer all data matched! \r\n");

        //     /* Print out receive buffer */
        //     //PRINTF("\r\n Master received:\r\n");
        //     for (i = 0U; i < TRANSFER_SIZE; i++)
        //     {
        //         /* Print 16 numbers in a line */
        //         if ((i & 0x0FU) == 0U)
        //         {
        //             //PRINTF("\r\n");
        //         }
        //         uint32_t abc = 111222;
        //         writeDataToSharedMemory(&abc);
        //         //PRINTF(" %02X", masterRxData[i]);
        //     }
        //     //PRINTF("\r\n");
        // }
        // else
        // {
        //     uint32_t ne_rabotaet = 322;
        //     writeDataToSharedMemory(&ne_rabotaet);
        //     //PRINTF("\r\nError occurred in ECSPI transfer ! \r\n");
        // }

        /* Wait for press any key */
        //PRINTF("\r\n Press any key to run again\r\n");
        //GETCHAR();

        /* Increase loop count to change transmit buffer */
        loopCount++;
    }

    return 0;
}
