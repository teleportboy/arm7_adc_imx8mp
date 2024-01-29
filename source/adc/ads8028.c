#include "ads8028.h"

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

bool readAllChannels(uint32_t channelsCount, uint32_t *adcChannelValues) 
{
    static uint32_t nextChannelToRead = 0;
    
    uint32_t adcChannelData = readADCbyChannel(nextChannelToRead);
    uint32_t channelId = adcChannelData >> 12;

    if(channelId >= channelsCount) {
        return false;
    }

    adcChannelValues[channelId] = adcChannelData & 0x00000FFF;

    if(++nextChannelToRead == channelsCount) {
        nextChannelToRead = 0;
        return true;
    }

    return false;
}