/*
 * flame_sensor.c
 *
 *  Created on: Sep 27, 2025
 *      Author: prof
 */

#include "flame_sensor.h"
#include "GPIO_messi.h"
#include "lcd_m.h"
#include "buzzer.h"

void FlameSensor_init(void)
{
	GPIO_setupPinDirection(FLAME_SENSOR_PORT_ID,FLAME_SENSOR_PIN_ID,PIN_INPUT);
}

uint8 FlameSensor_getValue(void)
{
	uint8 f = 0;
	while(GPIO_readPin(FLAME_SENSOR_PORT_ID,FLAME_SENSOR_PIN_ID))
	{
		if(f == 0)
		{
			LCD_clearScreen();
		}
		f = 1;
		Buzzer_on();
		LCD_displayStringRowColumn(0,0,"Critical alert!");
	}
	return f;
}


