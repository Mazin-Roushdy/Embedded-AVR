#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "EXT0_interface.h"
#include "EXT0_private.h"
#include "EXT0_config.h"

volatile void (*x) (void);

void EXT0_voidInit()
{
    #if EXT0_SENSE_MODE == IOC
    SET_BIT(MCUCR,0);
    CLR_BIT(MCUCR,1);

    #elif EXT0_SENSE_MODE == RISING
    SET_BIT(MCUCR,0);
    SET_BIT(MCUCR,1);

    #elif EXT0_SENSE_MODE == FALLING
    CLR_BIT(MCUCR,0);
    SET_BIT(MCUCR,1);

    #elif EXT0_SENSE_MODE == LOW_LEVEL
    CLR_BIT(MCUCR,0);
    CLR_BIT(MCUCR,1);

    #endif // EXT0_SENSE_MODE

    CLR_BIT(GICR,6);
    SET_BIT(GIFR,6);
}

void EXT0_voidEnable()
{
    SET_BIT(GICR,6);
}

void EXT0_voidDisable()
{
    CLR_BIT(GICR,6);
}

void EXT0_voidCallBack(volatile void (*addresscpy) (void))
{
    if(addresscpy!= NULL)
    {
        x=addresscpy;
    }
}
void __vector_1(void) __attribute__((signal,used));

void __vector_1(void)
{
    x();
}

