/*
 * flame_sensor.h
 *
 *  Created on: Sep 27, 2025
 *      Author: prof
 */

#ifndef FLAME_SENSOR_H_
#define FLAME_SENSOR_H_

#include "STD_messi.h"
/********************************************************************************
 *                               	Definitions                               	*
 * **************************************************************************** */
#define FLAME_SENSOR_PIN_ID        PIN2_MESSI
#define FLAME_SENSOR_PORT_ID       PORTD_MESSI
/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/
void FlameSensor_init(void);
uint8 FlameSensor_getValue(void);
/*void flame_alert_on();
void flame_alert_off();*/

#endif /* FLAME_SENSOR_H_ */
