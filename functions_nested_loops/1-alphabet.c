#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c != '{')
	{
		_putchar(c);
		c += 1;
	}
	_putchar('\n');
}
