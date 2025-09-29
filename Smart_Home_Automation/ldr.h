/*
 * ldr.h
 *
 *  Created on: Sep 26, 2025
 *      Author: prof
 */

#ifndef LDR_H_
#define LDR_H_

#include "STD_messi.h"
/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define  LDR_SENSOR_CHANNEL_ID                 0
#define  LDR_SENSOR_MAX_VOLT_VALUE             2.56
#define  LDR_SENSOR_MAX_LIGHT_INTENSITY        100
/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
uint16 LDR_getLightIntensity(void);

#endif /* LDR_H_ */
