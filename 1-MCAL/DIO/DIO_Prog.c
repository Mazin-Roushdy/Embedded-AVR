#include "D:\COTS\0-Library\STD_types.h"
#include "D:\COTS\0-Library\BIT_MATH.h"
#include "DIO_interface.h"
#include "DIO_Reg.h"

void DIO_voidSetPinDirection(u8 PORT,u8 PIN,u8 direction)
{
    if(port<4 && PIN <8)
    {
        if(direction==OUTPUT)
        {
            switch(PORT)
            {
                case PORTA : SET_BIT(DDRA,PIN);
                                break;
                case PORTA : SET_BIT(DDRB,PIN);
                                break;
                case PORTC : SET_BIT(DDRC,PIN);
                                break;
                case PORTD : SET_BIT(DDRD,PIN);
                                break;
            }
        }
        else if(direction==INPUT)
        {
            switch(PORT)
            {
                case PORTA : CLR_BIT(DDRA,PIN);
                                break;
                case PORTA : CLR_BIT(DDRB,PIN);
                                break;
                case PORTC : CLR_BIT(DDRC,PIN);
                                break;
                case PORTD : CLR_BIT(DDRD,PIN);
                                break;
            }
        }
    }
    else
    {
        /* Do Nothing */
    }
}
void DIO_voidSetPinvalue(u8 PORT,u8 PIN,u8 value)
{
    if(port<4 && PIN <8)
    {
        if(value==HIGH)
        {
            switch(PORT)
                switch(PORT)
            {
                case PORTA : SET_BIT(PORTA_REG,PIN);
                                break;
                case PORTA : SET_BIT(PORTB_REG,PIN);
                                break;
                case PORTC : SET_BIT(PORTC_REG,PIN);
                                break;
                case PORTD : SET_BIT(PORTD_REG,PIN);
                                break;
            }
        }
        else if(value==LOW)
        {
            switch(PORT)
                switch(PORT)
            {
                case PORTA : CLR_BIT(PORTA_REG,PIN);
                                break;
                case PORTA : CLR_BIT(PORTB_REG,PIN);
                                break;
                case PORTC : CLR_BIT(PORTC_REG,PIN);
                                break;
                case PORTD : CLR_BIT(PORTD_REG,PIN);
                                break;
            }
        }
    }
    else
    {
        /* Do Nothing */
    }
}
u8 DIO_u8GetPinvalue(u8 PORT,u8 PIN)
{
    u8 Local_u8pinvalue=0;
    switch(PORT)
    {
        case PORTA : Local_u8pinvalue=GET_BIT(PORTA_REG,PIN); break;
        case PORTB : Local_u8pinvalue=GET_BIT(PORTB_REG,PIN); break;
        case PORTC : Local_u8pinvalue=GET_BIT(PORTC_REG,PIN); break;
        case PORTD : Local_u8pinvalue=GET_BIT(PORTD_REG,PIN); break;
    }
    return Local_u8pinvalue;
}


void DIO_voidSetPortValue(u8 PORT,u8 value)
{
    if(PORT<4)
    {
        switch(PORT)
        {
            case PORTA : PORTA_REG=value; break;
            case PORTB : PORTB_REG=value; break;
            case PORTC : PORTC_REG=value; break;
            case PORTD : PORTD_REG=value; break;
        }
    }
}
void DIO_voidSetPortDirection(u8 PORT,u8 direction)
{
    if(PORT<4)
    {
        switch(PORT)
        {
            case PORTA : DDRA=direction; break;
            case PORTB : DDRB=direction; break;
            case PORTC : DDRC=direction; break;
            case PORTD : DDRD=direction; break;
        }
    }
}
