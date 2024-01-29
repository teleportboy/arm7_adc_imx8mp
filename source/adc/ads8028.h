#ifndef ADS8028_H
#define ADS8028_H

#include "stdint-gcc.h"
#include "stdbool.h"
#include "fsl_ecspi.h"

uint32_t createADCReadCommand(uint32_t channel);
uint32_t readADCbyChannel(uint32_t channel);
bool readAllChannels(uint32_t channelsCount, uint32_t *adcChannelValues);

#endif