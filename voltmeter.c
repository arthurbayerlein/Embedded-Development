#include "avr.h"
#include "avr/interrupt.h"

#define VOLTMETER_DDR DDRA
#define VOLTMETER_PIN_NUM 0

#define VOLT_RANGE_MAX 5.0
#define ADC_RANGE 1024.0

unsigned short current_voltage = 0;
unsigned short max_voltage = 0;
unsigned short min_voltage = 0;
unsigned long num_voltages_sampled = 0;
unsigned long sumed_voltages = 0;

volatile unsigned char sampling_running = 0;

unsigned char voltmeter_sampling_running() {return sampling_running;}

void voltmeter_sample_voltage()
{
	SET_BIT(ADCSRA, 3);
	SET_BIT(ADCSRA, 7);
	SET_BIT(ADCSRA, 4);
	SET_BIT(ADCSRA, 6);
}

ISR(ADC_vect)
{	
	if(sampling_running) 
	{
		current_voltage = ADC;
		num_voltages_sampled += 1;
		sumed_voltages += current_voltage;
		max_voltage = (current_voltage > max_voltage ? current_voltage : max_voltage );
		min_voltage = (current_voltage < min_voltage ? current_voltage : min_voltage );
			
		voltmeter_sample_voltage();
	}	
}

void setup_auto_sampling()
{
	SET_BIT(ADCSRA, 3);
	voltmeter_sample_voltage(); //Do initial sample
}

void voltmeter_ini()
{
    SET_BIT(ADMUX, 6);
}
	
float voltmeter_get_current()
{
    return ( (current_voltage / ADC_RANGE) * VOLT_RANGE_MAX );
}

int voltmeter_get_current_decimal()
{
	return ((voltmeter_get_current() - (int) voltmeter_get_current()) * 100);
}

float voltmeter_get_average()
{
    return ( (sumed_voltages / (ADC_RANGE * num_voltages_sampled)) * VOLT_RANGE_MAX );
}

int voltmeter_get_average_decimal()
{
	return ((voltmeter_get_average() - (int) voltmeter_get_average()) * 100);
}

float voltmeter_get_max()
{
    return ( (max_voltage / ADC_RANGE) * VOLT_RANGE_MAX );
}

int voltmeter_get_max_decimal()
{
	return ((voltmeter_get_max() - (int) voltmeter_get_max()) * 100);
}

float voltmeter_get_min()
{
    return ( (min_voltage / ADC_RANGE) * VOLT_RANGE_MAX );
}

int voltmeter_get_min_decimal()
{
	return ((voltmeter_get_min() - (int) voltmeter_get_min()) * 100);
}

void voltmeter_start()
{
    sampling_running = 1;
	setup_auto_sampling();
	voltmeter_sample_voltage();
	min_voltage = current_voltage;
}

void voltmeter_reset()
{
    current_voltage = 0; max_voltage = 0; min_voltage = 0; num_voltages_sampled = 0; sumed_voltages = 0;
	sampling_running = 0;
}

