/*
 * lm35_sens.c
 *
 *  Created on: Sep 25, 2025
 *      Author: prof
 */

#include "lm35_sens.h"
#include "adc.h"

uint8 temperature(uint16 value)
{
	uint16 temp = 0;

	temp = (uint8)(((uint32)(value*LM35_MAX_DEGREE*ADC_REF_VOLT_VALUE))/(ADC_MAXIMUM_VALUE*LM35_MAX_VOLTAGE));

	return temp;
}
