#include "main.h"

/**
 * find_prime - find a prime number
 * @n: integer
 * @i: counter integer
 *
 * Return: integer
 */

int find_prime(int n, int i)
{
	if (n < 2)
		return (0);
	else if ((n % i == 0) && (n == i))
		return (1);
	else if ((n % i == 0) && (n != i))
		return (0);
	else
		return (find_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: integer
*
 * Return: integer
 */

int is_prime_number(int n)
{
	return (find_prime(n, 2));
}
