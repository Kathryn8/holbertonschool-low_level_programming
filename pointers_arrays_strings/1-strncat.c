#include "main.h"

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
 * _strncat  - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: an integer
 *
 * Return: a string or pointer to a char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	char *tmp = dest;

	i = 0;
	while (dest[i] != '\0')
	{
		tmp[i] = dest[i];
		i = i + 1;
	}
	j = 0;
	while (src[j] != src[n])
	{
		tmp[i] = src[j];
		j = j + 1;
		i = i + 1;
	}
	tmp[i + 1] = '\0';
	dest = tmp;
	return (dest);
}
