/*
 * dc_motor.c
 *
 *  Created on: Sep 25, 2025
 *      Author: prof
 */

#include "dc_ motor.h"
#include "GPIO_messi.h"
#include "pwm.h"
#include "avr/io.h"

void DcMotor_Init(void)
{
	GPIO_setupPinDirection(DC_MOTOR_INPUT_1_PORT_ID,DC_MOTOR_INPUT_1_PIN_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(DC_MOTOR_INPUT_2_PORT_ID,DC_MOTOR_INPUT_2_PIN_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(DC_MOTOR_E_PORT_ID,DC_MOTOR_E_PIN_ID,PIN_OUTPUT);

	GPIO_writePin(DC_MOTOR_INPUT_1_PORT_ID,DC_MOTOR_INPUT_1_PIN_ID,LOGIC_LOW_MESSI);
	GPIO_writePin(DC_MOTOR_INPUT_2_PORT_ID,DC_MOTOR_INPUT_2_PIN_ID,LOGIC_LOW_MESSI);

}
void DcMotor_Rotate(DcMotor_State state,uint8 speed)
{
	if(state == stop)
	{
		GPIO_writePin(DC_MOTOR_INPUT_1_PORT_ID,DC_MOTOR_INPUT_1_PIN_ID,LOGIC_LOW_MESSI);
		GPIO_writePin(DC_MOTOR_INPUT_2_PORT_ID,DC_MOTOR_INPUT_2_PIN_ID,LOGIC_LOW_MESSI);
		PWM_Timer0_Start(speed);
	}
	else if(state == cw)
	{
		GPIO_writePin(DC_MOTOR_INPUT_1_PORT_ID,DC_MOTOR_INPUT_1_PIN_ID,LOGIC_LOW_MESSI);
		GPIO_writePin(DC_MOTOR_INPUT_2_PORT_ID,DC_MOTOR_INPUT_2_PIN_ID,LOGIC_HIGH_MESSI);
		PWM_Timer0_Start(speed);
	}
	else if(state == ccw)
	{
		GPIO_writePin(DC_MOTOR_INPUT_1_PORT_ID,DC_MOTOR_INPUT_1_PIN_ID,LOGIC_HIGH_MESSI);
		GPIO_writePin(DC_MOTOR_INPUT_2_PORT_ID,DC_MOTOR_INPUT_2_PIN_ID,LOGIC_LOW_MESSI);
		PWM_Timer0_Start(speed);
	}
}
