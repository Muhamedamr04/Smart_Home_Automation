/*
 * ldr.c
 *
 *  Created on: Sep 26, 2025
 *      Author: prof
 */


#include "ldr.h"
#include "adc.h"


uint16 LDR_getLightIntensity(void)
{
	uint16 adc = 0;

	adc = ADC_readchannel(LDR_SENSOR_CHANNEL_ID);
	uint16 intensity = (uint16)(((float)(1-((adc*ADC_REF_VOLT_VALUE)/(ADC_MAXIMUM_VALUE*LDR_SENSOR_MAX_VOLT_VALUE))))*LDR_SENSOR_MAX_LIGHT_INTENSITY);
	return (100-intensity);
}
