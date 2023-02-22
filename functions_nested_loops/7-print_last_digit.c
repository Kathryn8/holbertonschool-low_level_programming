#include "main.h"

/**
 * print_last_digit - Entry point
 * @num: an integer
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int num)
{
	int result;

	result = num % 10;
	if (result < 0)
	{
		result = result * -1;
	}
	_putchar(result);
	_putchar(result);
	return (result);
}
