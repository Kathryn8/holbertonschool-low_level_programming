#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at given index
 * @n: Pointer to an unsigned long int
 * @index: Index of the bit we want to set
 *
 * Return: 1 on success or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
