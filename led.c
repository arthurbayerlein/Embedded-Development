#include "avr.h"

#define LED_DDR DDRB
#define LED_PORT PORTB
#define LED_NUM_PIN 3

void led_ini()
{
  SET_BIT(LED_DDR,LED_NUM_PIN);
}

void led_on()
{  
  SET_BIT(LED_PORT, LED_NUM_PIN);
}

void led_off()
{
  CLR_BIT(LED_PORT, LED_NUM_PIN);
}

void led_blink(int num_of_blinks, unsigned short delay)
{
  for(int i = 0; i < num_of_blinks; i++)
  {
	wait_avr(delay);
    led_on();
    wait_avr(delay);
    led_off();
  }
}