/*
 * main.c
 *
 *  Created on: Jun 7, 2020
 *      Author: Boon
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"

#include "KEYPAD_interface.h"

#include "LCD_interface.h"

#include "EXT0_interface.h"

#include "GIE_interface.h"


#include <util/delay.h>
int main(void)
{
	DIO_voidSetPortDirection(PORTD,0b00001111);
	u16 var=0;
	while(1)
	{
		for(var=0;var<512;var++)
		{

			DIO_voidSetPortValue(PORTD,0b00001001);
			_delay_ms(2);


			DIO_voidSetPortValue(PORTD,0b00000001);
			_delay_ms(2);


			DIO_voidSetPortValue(PORTD,0b00000011);
			_delay_ms(2);


			DIO_voidSetPortValue(PORTD,0b00000010);
			_delay_ms(2);


			DIO_voidSetPortValue(PORTD,0b00000110);
			_delay_ms(2);


			DIO_voidSetPortValue(PORTD,0b00000100);
			_delay_ms(2);


			DIO_voidSetPortValue(PORTD,0b00001100);
			_delay_ms(2);


			DIO_voidSetPortValue(PORTD,0b00001000);
			_delay_ms(2);
		}
	}

	return 0;
}
