#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: an integer
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int result;

	result = n % 10;
	if (result < 0)
	{
		result = result * -1;
       	}
	_putchar(result);
	return (0);
}
