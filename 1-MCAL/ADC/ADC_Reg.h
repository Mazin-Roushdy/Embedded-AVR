#ifndef ADC_REG_H_INCLUDED
#define ADC_REG_H_INCLUDED

#define ADMUX *((volatile u8 *) 0x27)
#define ADCSRA *((volatile u8 *) 0x26)
#define ADCH *((volatile u8 *) 0x25)
#define ADCL *((volatile u8 *) 0x24)

#endif // ADC_REG_H_INCLUDED
