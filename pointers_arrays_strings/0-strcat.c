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
	char *tmp = malloc(sizeof(dest));

	i = 0;
	while (*(dest+i) != '0')
	{
		*(tmp+i) = *(dest+i);
		i = i + 1;
	}
	j = 0;
	while (*(src+j) != '0')
	{
		*(tmp+j) = *(src+j);
		j = j + 1;
		i = i + 1;
	}
	return (tmp);
}
