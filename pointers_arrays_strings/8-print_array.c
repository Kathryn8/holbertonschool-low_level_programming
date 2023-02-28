#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: takes parameter pointer to a char
 *
 * Return: length of a string without null character
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter = counter + 1;
	}
	return (counter);
}

/**
 * print_array - print an array of integers
 * @a: takes parameter pointer to an int
 * @n: an integer
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
		i = i + 1;
	}
	printf("\n");
}
