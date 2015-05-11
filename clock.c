#include "lcd.h"
#include <stdio.h>

#define TIME_ROW_LCD 0
#define DATE_ROW_LCD 1

int day = 31, month = 12, year = 1991;
int hour = 23, minute = 59, second = 55;

void clock_print_lcd()
{
	char time[16];
	char date[16];
	sprintf(time, "    %.2i:%.2i:%.2i    ", hour, minute, second); // HH:MM:SS
	sprintf(date, "   %.2i/%.2i/%.4i   ", month, day, year); // MM/DD/YYYY
	lcd_print(time, 0);
	lcd_print(date, 1);
}

void clock_tick()
{
  second += 1;
  if(second > 59)
  {
	second = 0;
	minute += 1;
	
	if(minute > 59)
	{
		minute = 0;
		hour += 1;
		
		if(hour > 23)
		{
		hour = 0;
		day += 1;
	  
	   
		if((day >= 28) && (month == 2)) {day = 1; month += 1;}
		else if((day >= 30) && ( (month == 4) || (month == 6) || (month == 9) || (month == 11) )) {day = 1; month += 1;}
		else if((day >= 31)) {day = 1; month += 1;}
       
		if(month >= 12) {year += 1; month = 1;}
		if(year > 9999) {year = 0;}
	    
		}
	}
  }
}
  

void clock_second_up()
{
	if(second < 59) {second += 1;}
	
}

void clock_second_down()
{
    if(second > 0) {second -= 1;}	
}

void clock_minute_up()
{
	if(minute < 59) {minute += 1;}
}

void clock_minute_down()
{
    if(minute> 0) {minute -= 1;}	
}

void clock_hour_up()
{
	if(hour < 23) {hour += 1;}
}

void clock_hour_down()
{
	if(hour> 0) {hour -= 1;}	
}


void clock_day_up()
{
	if(month == 2) {if(day < 28) {day+=1;}}
    else if( (month == 4) || (month == 6) || (month == 9) || (month == 11) ) {if(day < 30) {day+=1;}}
	else {if(day < 31) {day+=1;}}
}

void clock_day_down()
{
	if(day > 1) {day -= 1;}
}

void clock_month_up()
{
	if(month < 12) {month += 1; day = 1;}
}

void clock_month_down()
{
	if(month > 1) {month -= 1; day = 1;}
}

void clock_year_up()
{
	if(year < 9999) {year += 1;}
}

void clock_year_down()
{
	if(year > 0) {year -= 1;}
}