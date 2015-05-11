#include "avr.h"

//Location of keypad in microcontroller
#define KEYDDR (DDRC)
#define KEYPORT (PORTC)
#define KEYPIN (PINC)

char keypad_get_key()
{
	int r = 0,c = 0;
	KEYPORT|= 0XF0;
	for(;r<4;r++)
	{
		KEYDDR&=~(0XFF);
		KEYDDR|=(0X01<<c);
		for(;c<4;c++)
		{
			if(!(KEYPIN & (0X10<<r)))
			{
				if( (c == 0) && (r == 0) ) {return '1';}
				else if( (c == 1 ) && (r == 0) ) {return '2';}
				else if( (c == 2 ) && (r == 0) ) {return '3';}
				else if( (c == 3 ) && (r == 0) ) {return 'A';}
				else if( (c == 0 ) && (r == 1) ) {return '4';}
				else if( (c == 1 ) && (r == 1) ) {return '5';}
				else if( (c == 2 ) && (r == 1) ) {return '6';}
				else if( (c == 3 ) && (r == 1) ) {return 'B';}
				else if( (c == 0 ) && (r == 2) ) {return '7';}
				else if( (c == 1 ) && (r == 2) ) {return '8';}
				else if( (c == 2 ) && (r == 2) ) {return '9';}
				else if( (c == 3 ) && (r == 2) ) {return 'C';}
				else if( (c == 0 ) && (r == 3) ) {return '*';}
				else if( (c == 1 ) && (r == 3) ) {return '0';}
				else if( (c == 2 ) && (r == 3) ) {return '#';}
				else if( (c == 3 ) && (r == 3) ) {return 'D';}
			}
		}
	}
	return '?';//Indicate No key was pressed
}