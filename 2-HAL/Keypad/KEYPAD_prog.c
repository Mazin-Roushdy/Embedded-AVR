#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "KEYPAD_interface.h"
#include <util/delay.h>


const u8 switch_value[4][4]={ {'1','2','3','*'},{'4','5','6','/'},{'7','8','9','+'},{'.','0','=','-'}};

u8 KEYPAD_u8GetPressedKey(void)
{
	u8 Local_u8PressedKey=0;
	for(u8 coloumn=0;coloumn<4;coloumn++)
	{
		DIO_voidSetPinValue(KEYPAD_PORT,coloumn,LOW);
		for(u8 row=4;row<8;row++)
		{
			if(!(DIO_u8GetPinvalue(KEYPAD_PORT,row)))
			{	/*polling*/
				//while(!(DIO_u8GetPinvalue(KEYPAD_PORT,row)));
				/*Bouncing*/
				_delay_ms(10);
				Local_u8PressedKey=switch_value[row-4][coloumn];

			}
		}

		DIO_voidSetPinValue(KEYPAD_PORT,coloumn , HIGH);

	}
		return Local_u8PressedKey ;
}
