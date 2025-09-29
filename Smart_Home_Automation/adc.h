/*
 * adc.h
 *
 *  Created on: Sep 19, 2025
 *      Author: prof
 */

#ifndef ADC_H_
#define ADC_H_

#include "STD_messi.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define ADC_MAXIMUM_VALUE    1023
#define ADC_REF_VOLT_VALUE   2.56

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/


void ADC_init(void);
uint16 ADC_readchannel(uint8 ch_num);


#endif /* ADC_H_ */
