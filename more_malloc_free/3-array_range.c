#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
 * array_range -  creates an array of integers
 * @min: integer
 * @max: integer
 *
 * Return: a pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *new_arr;
	int len;
	int i;

	if (min > max)
		return (NULL);
	len = max - min;
	if (len == 0)
		len = len + 1;
	new_arr = malloc(sizeof(*new_arr) * len);
	if (new_arr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_arr[i] = min + i;
		i = i + 1;
	}
	return (new_arr);
}
