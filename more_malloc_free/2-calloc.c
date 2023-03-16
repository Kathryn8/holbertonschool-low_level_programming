#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

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
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: allocates and returns a pointer to memory for an array of nmemb
 *  elements of size bytes each
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned long long int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i = i + 1;
	}
	return ((void *)ptr);
}
