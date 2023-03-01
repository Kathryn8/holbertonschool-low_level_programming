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
 * _strcat  - concatenate two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: a string or pointer to a char
 */

char *_strcat(char *dest, char *src)
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
	while (src[j] != '\0')
	{
		tmp[i] = src[j];
		j = j + 1;
		i = i + 1;
	}
	tmp[i + 1] = '\0';
	dest = tmp;
	return (dest);
}
