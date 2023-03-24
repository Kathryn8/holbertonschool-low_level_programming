#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of data types to be passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int j;
	unsigned int k;

	print_t pairs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(ap, format);
	i = 0;
	k = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (pairs[j].ch != NULL)
		{
			if (*pairs[j].ch == format[i])
			{
				if (k != 0)
				{
					printf(", ");
				}
				pairs[j].f(ap);
				k = k + 1;
				break;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	va_end(ap);
	printf("\n");
}

/**
 * print_char - prints a char
 * @ap: va_list type
 *
 * Return: void
 */
void print_char(va_list ap)
{
	printf("%c", (char)va_arg(ap, int));
}
/**
 * print_int - prints a int
 * @ap: va_list type
 *
 * Return: void
 */

void print_int(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * print_float - prints a float
 * @ap: va_list type
 *
 * Return: void
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints a string
 * @ap: va_list type
 *
 * Return: void
 */
void print_string(va_list ap)
{
	char *str = va_arg(ap, char *);

	str == NULL ? printf("(nil)") : printf("%s", str);
}
