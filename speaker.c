#include "avr.h"
#include <math.h>

#define SPEAKER_PORT PORTC
#define SPEAKER_PORT_NUM 0
#define SPEAKER_DDR DDRC

void speaker_ini()
{
	SET_BIT(SPEAKER_DDR, SPEAKER_PORT_NUM);
}

void speaker_play_frequency(int frequency, int duration)
{
	int delay = (2000 / frequency);
	int time = duration / delay;
	
	for (int i = 0; i < time; i++)
	{
		SET_BIT(SPEAKER_PORT, SPEAKER_PORT_NUM);
		wait_avr(delay);
		CLR_BIT(SPEAKER_PORT, SPEAKER_PORT_NUM);
		wait_avr(delay);
	}
	
	wait_avr(25);
}