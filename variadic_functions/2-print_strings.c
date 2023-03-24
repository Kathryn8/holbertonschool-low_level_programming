#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf("%s", separator);
		}
		printf("%s", va_arg(ap, char *));
		i = i + 1;
	}
	printf("\n");
	va_end(ap);
}
