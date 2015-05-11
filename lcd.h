#ifndef __lcd__
#define __lcd__

#include "avr.h"
#include "lcd.h"

void lcd_ini(void);
void clr_lcd(void);
void pos_lcd(unsigned char r, unsigned char c);
void put_lcd(char c);
void puts_lcd(const char *s);
void lcd_print(char * str, int row);

#endif
