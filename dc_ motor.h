/*
 * dc_ motor.h
 *
 *  Created on: Sep 25, 2025
 *      Author: prof
 */

#ifndef DC__MOTOR_H_
#define DC__MOTOR_H_

#include "STD_messi.h"
/********************************************************************************
 *                               	Definitions                               	*
 * **************************************************************************** */
#define DC_MOTOR_INPUT_1_PORT_ID               PORTB_MESSI
#define DC_MOTOR_INPUT_1_PIN_ID                PIN0_MESSI

#define DC_MOTOR_INPUT_2_PORT_ID               PORTB_MESSI
#define DC_MOTOR_INPUT_2_PIN_ID		           PIN1_MESSI

#define DC_MOTOR_E_PORT_ID                     PORTB_MESSI
#define DC_MOTOR_E_PIN_ID                      PIN3_MESSI
/*******************************************************************************
 *                               Types Declaration                             *
 *******************************************************************************/
typedef enum
{
	stop,cw,ccw
}DcMotor_State;
/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/
void DcMotor_Init(void);
void DcMotor_Rotate(DcMotor_State state,uint8 speed);


#endif /* DC__MOTOR_H_ */
