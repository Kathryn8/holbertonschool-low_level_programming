#include <stddef.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of its parameters
 * @n: const unsigned int
 *
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum = sum + va_arg(ap, int);
		i = i + 1;
	}
	va_end(ap);
	return (sum);
}
