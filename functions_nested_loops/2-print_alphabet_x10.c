#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c != '{')
		{
			_putchar(c);
			c += 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}
