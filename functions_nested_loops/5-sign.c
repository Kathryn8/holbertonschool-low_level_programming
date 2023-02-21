#include "main.h"

/**
 * print_sign - Entry point
 * @n: A single integer
 *
 * Return: 1 if positive, -1 if negative, otherwise 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
