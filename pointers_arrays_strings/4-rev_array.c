#include "main.h"
#include <stdio.h>
/**
 * reverse_array  - reverse the content of an array of integers
 * @a: pointer to an integer
 * @n: an integer
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;

	if (n <= 0)
		return;
	i = 1;
	while (i <= n)
	{
		printf("%d", a[n - i]);
		if (i != n)
			printf(", ");
		i = i + 1;
	}
	printf("\n");
}
