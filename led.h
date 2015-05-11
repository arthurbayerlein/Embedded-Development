#ifndef __led__
#define __led__

#include "avr.h"

void led_ini();
void led_on();
void led_off();
void led_blink(int num_of_blinks, unsigned short delay);

#endif