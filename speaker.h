#ifndef __speaker__
#define __speaker__

#include "avr.h"

void speaker_ini();
void speaker_play_frequency(int frequency, int duration);

#endif