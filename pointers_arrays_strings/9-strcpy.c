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
 * _strcpy - copies the string pointed to by SRC to DEST
 * @dest: pointer to a buffer
 * @src: a string
 *
 * Return: pointer to string
 */

char *_strcpy(char *dest, char *src)
{
	dest = src;
	return (dest);
}