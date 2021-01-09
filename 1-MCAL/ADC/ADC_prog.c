#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ADC_interface.h"
#include "ADC_Reg.h"

void ADC_voidInit(void)
{
    /* VREF= AVCC , ADLRA =Right adjustments , channel one with gain=0 */
    ADMUX=0b01000000;

    SET_BIT(ADCSRA,7); //ADC Enable
    CLR_BIT(ADCSRA,6); //ADC conversion stop
    SET_BIT(ADCSRA,4); //ADC clear finish config flag
    CLR_BIT(ADCSRA,3); //Disable ADC interrupt
    SET_BIT(ADCSRA,0); // Prescale ADC C/K
    SET_BIT(ADCSRA,1); // Prescale ADC C/K
    SET_BIT(ADCSRA,2); // Prescale ADC C/K
}
u16 ADC_Read(u8 channel)
{   u16 value=0;
    SET_BIT(ADCSRA,6);
    while(GET_BIT(ADCSRA,4)==0);
    SET_BIT(ADCSRA,4);
    value=((u16)(ADCH<<8)|(u16)(ADCL));
    value=(value*5000UL)/256;
    return value
}

void ADC_voidDisable(void)
{
	CLR_BIT(ADCSRA,7); //ADC Disable
}
