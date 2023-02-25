#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int I;
	int j;

	I = 0;
	while (I < 24)
	{
		j = 0;
		while (j < 60)
		{
			if (I == 0)
			{
				_putchar(I + '0');
				_putchar(I + '0');
			} else
			{
				_putchar(((I - (I % 10)) / 10) + '0');
				_putchar((I % 10) + '0');
			}
			_putchar(':');
			if (j == 0)
			{
				_putchar(j + '0');
				_putchar(j + '0');
			} else
			{
				_putchar(((j - (j % 10)) / 10) + '0');
				_putchar((j % 10) + '0');
			}
			_putchar('\n');
			j = j + 1;
		}
		I = I + 1;
	}
}
