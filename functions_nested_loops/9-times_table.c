#include "main.h"
#include <stdio.h>
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int col_counter;
	int row_counter;
	int result;
	int units;
	int tens;

	col_counter = 0;
	while (col_counter <= 9)
	{
		row_counter = 0;
		while (row_counter <= 9)
		{
			result = row_counter * col_counter;
			units = result % 10;
			tens = (result - units) / 10;
			if (row_counter == 0)
			{
				_putchar('0');
				_putchar(',');
			} else if (row_counter == 9)
			{
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				} else
				{
					_putchar(' ');
					_putchar(tens + '0');
					_putchar(units + '0');
				}
			} else
			{
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
					_putchar(',');
				} else
				{
					_putchar(' ');
					_putchar(tens + '0');
					_putchar(units + '0');
					_putchar(',');
				}
			}
			row_counter = row_counter + 1;
		}
		_putchar('\n');
		col_counter = col_counter + 1;
	}
}
