#include "main.h"

/**
 * print_line - Entry point
 * @n: an integer
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		while (n > 0)
		{
			_putchar('_');
			n = n - 1;
		}
		_putchar('\n');
	}
}
