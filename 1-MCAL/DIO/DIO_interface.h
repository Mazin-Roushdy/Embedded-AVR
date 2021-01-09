#ifndef DIO_INTERFACE_H_INCLUDED
#define DIO_INTERFACE_H_INCLUDED

void DIO_voidSetPinValue(u8 PORT,u8 PIN,u8 value);
void DIO_voidSetPinDirection(u8 PORT,u8 PIN,u8 direction);
u8 DIO_u8GetPinvalue(u8 PORT,u8 PIN);

void DIO_voidSetPortValue(u8 PORT,u8 value);
void DIO_voidSetPortDirection(u8 PORT,u8 value);

#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

#define INPUT 0
#define OUTPUT 1

#define HIGH 1
#define LOW 0


#endif // DIO_INTERFACE_H_INCLUDED
