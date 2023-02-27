#include "main.h"

/**
 * swap_int - swaps two ints
 * @a: takes parameter pointer to an int a
 * @b: takes parameter pointer to an int b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
