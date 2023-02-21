#include "main.h"

/**
 * _abs - Entry point
 * @int: A single integer
 *
 * Return: the absolute value of an integer
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (0);
	}
}
