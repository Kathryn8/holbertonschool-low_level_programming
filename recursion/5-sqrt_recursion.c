#include "main.h"

/**
 * find_root - find the natural square root of a number
 * @n: integer
 * @i: counter integer
 *
 * Return: integer
 */

int find_root(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (find_root(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
*
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return find_root(n, 0);
}
