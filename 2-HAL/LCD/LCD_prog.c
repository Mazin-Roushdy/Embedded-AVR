#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "LCD_interface.h"
#include <util/delay.h>

void LCD_voidinit(void)
{
    _delay_ms(35);
    /* Write 2 lines with font 5x7*/
    LCD_voidwritecmd(0b00111000);
    _delay_ms(1);
    /* Display on but with no cursor */
    LCD_voidwritecmd(0b00001100);
    _delay_ms(1);
    /* Clear display */
     LCD_voidwritecmd(0b00000001);
    _delay_ms(2);
    /* sets cursor moving direction */
    LCD_voidwritecmd(0b00000110);
}
void LCD_voidwritechar(u8 data)
{
    DIO_voidSetPinValue(CONTROL_PORT,RS,HIGH);
    DIO_voidSetPinValue(CONTROL_PORT,RW,LOW);

    DIO_voidSetPortValue(DATA_PORT,data);

    DIO_voidSetPinValue(CONTROL_PORT,EN,HIGH);
    _delay_ms(2);
    DIO_voidSetPinValue(CONTROL_PORT,EN,LOW);
    _delay_ms(2);
}
void LCD_voidwritecmd(u8 cmd)
{
    DIO_voidSetPinValue(CONTROL_PORT,RS,LOW);
    DIO_voidSetPinValue(CONTROL_PORT,RW,LOW);

    DIO_voidSetPortValue(DATA_PORT,cmd);

    DIO_voidSetPinValue(CONTROL_PORT,EN,HIGH);
    _delay_ms(2);
    DIO_voidSetPinValue(CONTROL_PORT,EN,LOW);
    _delay_ms(2);
}
