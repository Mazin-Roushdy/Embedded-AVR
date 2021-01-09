#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GIE_interface.h"
#include "GIE_private.h"
#include "GIE_config.h"

void GIE_voidEnable()
{
    SET_BIT(SREG,7);
}

void GIE_voidDisable()
{
    CLR_BIT(SREG,7);
}
