#include "avr.h"
#include "speaker.h"
#include "MusicPlayer.h"

void ini_all()
{
	speaker_ini();
}

int main()
{
	ini_all();
	for(;;)
	{
		musicplayer_play_twinkletwinkle();
		wait_avr(1000);
	}
	
}

