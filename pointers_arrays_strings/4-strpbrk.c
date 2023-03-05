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
 * _strpbrk - searches a string for any of a set of bytes
 * @s: takes parameter pointer to a string s which will be sesrched
 * @accept: a string against which s is checked for matching characters
 *
 * Return: a pointer to the first matching character
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (0);
}
