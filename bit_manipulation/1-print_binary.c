#include <limits.h>
#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: unsigned long int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int printed = 0;

	mask = 1UL << (sizeof(unsigned long int) * CHAR_BIT - 1);
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask != 0)
	{
		if ((n & mask) == 0 && printed == 1)
		{
			_putchar('0');
		}
		else if ((n & mask) != 0)
		{
			_putchar('1');
			printed = 1;
		}
		mask >>= 1;
	}
}
