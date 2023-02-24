#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int units;

	tens = 0;
	while (tens <= 9)
	{
		units = tens + 1;
		while (units <= 9)
		{
			putchar(tens + '0');
			putchar(units + '0');
			if (!(tens == 8 && units == 9))
			{
				putchar(',');
				putchar(' ');
			}
			units = units + 1;
		}
		tens = tens + 1;
	}
	putchar('\n');
	return (0);
}
