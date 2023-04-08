#include <limits.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: index starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index, or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = n >> index;
	if ((mask & 1) == 1)
	{
		return (1);
	}
	else if ((mask & 1) == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
