#include "main.h"

/**
 * _isdigit - Entry point
 * @c: A single character
 *
 * Return: 1 if uppercase, otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
