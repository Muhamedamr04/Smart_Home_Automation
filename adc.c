/*
 * adc.c
 *
 *  Created on: Sep 19, 2025
 *      Author: prof
 */

#include "adc.h"
#include <avr/io.h>
#include "common_macros.h"

void ADC_init(void)
{

	SET_BIT(ADMUX,REFS0);
	SET_BIT(ADMUX,REFS1);
	//ADMUX = 0;
	SET_BIT(ADCSRA,ADEN);
	SET_BIT(ADCSRA,ADPS2);
	SET_BIT(ADCSRA,ADPS1);
	SET_BIT(ADCSRA,ADPS0);

}

uint16 ADC_readchannel(uint8 ch_num)
{
	ADMUX = (ADMUX & 0xE0) | ch_num;
	SET_BIT(ADCSRA,ADSC);
	while(bit_is_clear(ADCSRA,ADIF));
	SET_BIT(ADCSRA,ADIF);
	return ADC;
}
