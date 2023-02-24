#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;
	int units;
	int tens;

	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i <= 14)
		{
			units = i % 10;
			tens = (i - units) / 10;
			if (i > 9)
			{
				_putchar(tens + '0');
			}
			_putchar(units + '0');
			i = i + 1;
		}
		_putchar('\n');
		j = j + 1;
	}
}
