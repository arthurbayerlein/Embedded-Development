#ifndef __voltmeter__
#define __voltmeter__

#include "avr.h"

void voltmeter_ini();
float voltmeter_get_current();
float voltmeter_get_average();
float voltmeter_get_max();
float voltmeter_get_min();
void voltmeter_start();
void voltmeter_reset();
void voltmeter_sample_voltage();
int voltmeter_get_current_decimal();
int voltmeter_get_average_decimal();
int voltmeter_get_max_decimal();
int voltmeter_get_min_decimal();
unsigned char voltmeter_sampling_running();

#endif