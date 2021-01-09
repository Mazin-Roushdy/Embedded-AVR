#ifndef EXT0_PRIVATE_H_INCLUDED
#define EXT0_PRIVATE_H_INCLUDED

#define MCUCR *((volatile u8 *) 0x55)
#define MCUCSR *((volatile u8 *) 0x54)
#define GICR *((volatile u8 *) 0x5B)   //General interrupt control register
#define GIFR *((volatile u8 *) 0x5A)  //General interrupt flag register

#endif // EXT0_PRIVATE_H_INCLUDED

