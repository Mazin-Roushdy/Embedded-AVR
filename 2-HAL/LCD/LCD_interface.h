#ifndef LCD_INTERFACE_H_INCLUDED
#define LCD_INTERFACE_H_INCLUDED

void LCD_voidinit(void);
void LCD_voidwritechar(u8 data);
void LCD_voidwritecmd(u8 cmd);

#define CONTROL_PORT PORTA

#define RS PIN7
#define RW PIN6
#define EN PIN5

#define DATA_PORT PORTD

#endif // LCD_INTERFACE_H_INCLUDED
