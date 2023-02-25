#include "main.h"
#include <stdio.h>
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int I;
	int j;

	I = 0;
	while (I <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
			} else
			{
				if ((j * I) < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((j * I) + '0');
					if (j != 9)
						_putchar(',');
				} else
				{
					_putchar(' ');
					_putchar((((j * I) - ((j * I) % 10)) / 10) + '0');
					_putchar(((j * I) % 10) + '0');
					if (j != 9)
						_putchar(',');
				}
			}
			j = j + 1;
		}
		_putchar('\n');
		I = I + 1;
	}
}
