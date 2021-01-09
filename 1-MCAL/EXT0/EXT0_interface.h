#ifndef EXT0_INTERFACE_H_INCLUDED
#define EXT0_INTERFACE_H_INCLUDED

#define IOC 1
#define FALLING 4
#define RISING 7
#define LOW_LEVEL 10

#define NULL ((void*)0)

void EXT0_voidInit(void);
void EXT0_voidEnable(void);
void EXT0_voidDisable(void);
void EXT0_voidCallBack(volatile void (*addresscpy) (void));
void EXT0_voidSetSignalch(u8 sensecpy);


#endif // EXT0_INTERFACE_H_INCLUDED
