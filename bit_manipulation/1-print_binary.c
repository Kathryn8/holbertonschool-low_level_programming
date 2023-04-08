#include "main.h"

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while ((mask << 1) <= n)
	{
		mask = mask << 1;
	}
	while (mask != 0)
	{
		if ((n & mask) == 0)
        {
		_putchar('0');
        }
		else
		{
			_putchar('1');
		}
		mask = mask >> 1;
	}
}
