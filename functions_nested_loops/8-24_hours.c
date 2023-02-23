#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int hours_counter;
	int seconds_counter;
	int units_hour;
	int tens_hour;
	int units_second;
	int tens_second;

	hours_counter = 0;
	while (hours_counter < 24)
	{
		seconds_counter = 0;
		while (seconds_counter < 60)
		{
			if (hours_counter == 0)
			{
				_putchar(hours_counter + '0');
				_putchar(hours_counter + '0');
			} else
			{
				units_hour = hours_counter % 10;
				tens_hour = (hours_counter - units_hour) / 10;
				_putchar(tens_hour + '0');
				_putchar(units_hour + '0');
			}
			_putchar(':');
			if (seconds_counter == 0)
			{
				_putchar(seconds_counter + '0');
				_putchar(seconds_counter + '0');
			} else
			{
				units_second = seconds_counter % 10;
				tens_second = (seconds_counter - units_second) / 10;
				_putchar(tens_second + '0');
				_putchar(units_second + '0');
			}
			_putchar('\n');
			seconds_counter = seconds_counter + 1;
		}
		hours_counter = hours_counter + 1;
	}
}
