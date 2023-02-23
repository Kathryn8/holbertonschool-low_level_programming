#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: integer
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n = n - 1;
		}
		printf("98\n");
	} else if (n < 98)
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n = n + 1;
		}
		printf("98\n");
	} else
	{
		printf("98\n");
	}
}
