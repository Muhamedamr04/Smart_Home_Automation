/*
 * pwm.c
 *
 *  Created on: Sep 25, 2025
 *      Author: prof
 */

#include "pwm.h"
#include <avr/io.h>

void PWM_Timer0_Start(uint8 duty_cycle)
{
	DDRB |= (1<<PB3);
	TCCR0 |= (1<<WGM01) | (1<<WGM00) | (1<<COM01) | (1<<CS00) | (1<<CS02);
	TCNT0 = 0;
	OCR0 = (duty_cycle * 255) / 100;
	while(bit_is_clear(TIFR,OCF0));
	TIFR |= (1<<OCF0);
}
