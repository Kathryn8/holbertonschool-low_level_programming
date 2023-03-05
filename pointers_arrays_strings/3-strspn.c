#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strchr -  locates a character in a string
 * @s: takes parameter pointer to a string
 * @c: a character
 *
 * Return: pointer to the character
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ptr = NULL;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
		i = i + 1;
	}
	return (ptr);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: takes parameter pointer to a string s of which inital bytes are returned
 * @accept: a string against which s is checked for inital characters
 *
 * Return: unsigned int number of bytes of s matched
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes;
	unsigned int i;

	bytes = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (_strchr(accept, s[i]) != NULL)
			bytes = bytes + 1;
		else
			return (bytes);
		i = i + 1;
	}
	return (bytes);
}
