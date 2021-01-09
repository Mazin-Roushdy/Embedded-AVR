#ifndef DIO_REG_H_INCLUDED
#define DIO_REG_H_INCLUDED

/*PORTA Register*/
#define DDRA *((volatile u8 *)0x3a)
#define PORTA_REG *((volatile u8 *)0x3b)
#define PINA_REG *((volatile u8 *)0x39)

/*PORTB Register*/
#define DDRB *((volatile u8 *)0x37)
#define PORTB_REG *((volatile u8 *)0x38)
#define PINB_REG *((u8 *)0x36)

/*PORTC Register*/
#define DDRC *((volatile u8 *)0x34)
#define PORTC_REG *((volatile u8 *)0x35)
#define PINC_REG *((volatile u8 *)0x33)

/*PORTD Register*/
#define DDRD *((volatile u8 *)0x31)
#define PORTD_REG *((volatile u8 *)0x32)
#define PIND_REG *((volatile u8 *)0x30)

#endif // DIO_REG_H_INCLUDED
