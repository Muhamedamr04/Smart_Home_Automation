/*
 * app.c
 *
 *  Created on: Sep 25, 2025
 *      Author: prof
 */

#include "lcd_m.h"
#include "buzzer.h"
#include "led.h"
#include "pwm.h"
#include "dc_ motor.h"
#include <util/delay.h>
#include "ldr.h"
#include "lm35_sens.h"
#include "flame_sensor.h"

int main(void)
{
	uint16 light;
	uint16 data;
	uint8  temp;
	ADC_init();
	FlameSensor_init();
	LCD_init();
	DcMotor_Init();
	Buzzer_init();

	LCD_displayStringRowColumn(0,3,"FAN is ");
	LCD_displayStringRowColumn(1,0,"Temp= ");
	LCD_displayStringRowColumn(1,8,"LDR= ");


    while(1)
    {
    	light = LDR_getLightIntensity();

    	if(light == 1)
    	{
    		light = 0;
    	}

    	data = ADC_readchannel(1);
    	temp = temperature(data);

    	LCD_moveCursor(1,5);
		LCD_intgerToString(temp);
		LCD_displayString(" ");

		LCD_moveCursor(1,12);
		LCD_intgerToString(light);
		LCD_displayString("% ");

		if(temp >= 40)
		{
			DcMotor_Rotate(ccw,100);
			LCD_displayStringRowColumn(0,10,"ON ");
		}
		else if((temp >= 35) && (temp < 40))
		{
			DcMotor_Rotate(ccw,75);
			LCD_displayStringRowColumn(0,10,"ON ");
		}
		else if((temp >= 30) && (temp < 35))
		{
			DcMotor_Rotate(ccw,50);
			LCD_displayStringRowColumn(0,10,"ON ");
		}
		else if((temp >= 25) && (temp < 30))
		{
			DcMotor_Rotate(ccw,25);
			LCD_displayStringRowColumn(0,10,"ON ");
		}
		else if(temp < 25)
		{
			DcMotor_Rotate(stop,0);
			LCD_displayStringRowColumn(0,10,"OFF");
		}



    	if(15 > light)
    	{
    		LED_on(red);
    		LED_on(green);
    		LED_on(blue);
    	}
    	else if((16 <= light) && (50 >= light))
    	{
    		LED_off(blue);
    		LED_on(red);
    		LED_on(green);
    	}
    	else if((51 <= light) && (70 >= light))
    	{
    		LED_off(blue);
    		LED_on(red);
    		LED_off(green);
    	}
    	else if(70 < light)
    	{
    		LED_off(blue);
    		LED_off(red);
    		LED_off(green);
    	}


		if(FlameSensor_getValue() == LOGIC_HIGH_MESSI)
		{
			Buzzer_off();
			LCD_clearScreen();
			LCD_moveCursor(0,0);
			LCD_displayStringRowColumn(0,3,"FAN is ");
			LCD_displayStringRowColumn(1,0,"Temp= ");
			LCD_displayStringRowColumn(1,8,"LDR= ");


		}



    }

}
