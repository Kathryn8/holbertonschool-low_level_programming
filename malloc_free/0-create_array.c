#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a
 * specific char.
 * @size: unsigned int
 * @c: character
 *
 * Return: NULL if size is 0, if NULL fails, returns a pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *my_array;
	unsigned int i;

	my_array = malloc(size);
	if (my_array == NULL || size == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		my_array[i] = c;
		i = i + 1;
	}
	return (my_array);
}
