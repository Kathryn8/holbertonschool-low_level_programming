#include "main.h"
#include <stddef.h>

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
 * rev_string - reverse a string
 * @s: takes parameter pointer to a char
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length;
	int tmp;
	int i;

	length = _strlen(s) - 1;
	i = 0;
	while (i < (length / 2))
	{
		tmp = s[i];
		s[i] = s[length - i];
		s[length - i] = tmp;
		i = i + 1;
	}
}
