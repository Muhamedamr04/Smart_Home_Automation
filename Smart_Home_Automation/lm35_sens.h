/*
 * lm35_sens.h
 *
 *  Created on: Sep 25, 2025
 *      Author: prof
 */

#ifndef LM35_SENS_H_
#define LM35_SENS_H_

#include "STD_messi.h"
/********************************************************************************
 *                               	Definitions                               	*
 * **************************************************************************** */
#define LM35_MAX_DEGREE    150
#define LM35_MAX_VOLTAGE   1.5

/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/
uint8 temperature(uint16 value);


#endif /* LM35_SENS_H_ */
