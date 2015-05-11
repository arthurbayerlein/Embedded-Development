#include "avr.h"
#include "lcd.h"
#include "voltmeter.h"
#include "keypad.h"
#include "avr/interrupt.h"
#include <stdio.h>

#define LCD_REFRESH_RATE 500 //In miliseconds

char curr_and_max[16];
char avg_and_min[16];

void ini_all()
{
	lcd_ini();
	voltmeter_ini();

	
	SET_BIT(TIMSK, TICIE1);      
	TCCR1A = 0x00;
	TCCR1B = 0x1C;
	ICR1 = (unsigned short)((XTAL_FRQ / 256) * (LCD_REFRESH_RATE / 100));
	
    SEI();
}

int main()
{
	ini_all();
	for(;;)
	{
		if(keypad_get_key() == '1')
		{
			if(voltmeter_sampling_running()) voltmeter_reset();
			else voltmeter_start();
			wait_avr(300);
		}
	}
	
}

//Updates based on LCD refresh rate defined on top of this file
ISR(TIMER1_CAPT_vect)
{
	if(voltmeter_sampling_running())
	{
		sprintf(curr_and_max, "Cur:%d.%02dMax:%d.%02d", (int) voltmeter_get_current(),voltmeter_get_current_decimal(),(int) voltmeter_get_max(), voltmeter_get_max_decimal());
		sprintf(avg_and_min, "Avg:%d.%02dMin:%d.%02d", (int) voltmeter_get_average(), voltmeter_get_average_decimal(), (int) voltmeter_get_min(), voltmeter_get_min_decimal());

	}
	else
	{
		sprintf(curr_and_max, "Cur:----Max:----");
		sprintf(avg_and_min, "Avg:----Min:----");
	}
	
	lcd_print(curr_and_max, 0);
	lcd_print(avg_and_min, 1);
}