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
 * _strcmp  - compares two strings
 * @s1: destination string
 * @s2: source string
 *
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1 = s1 + 1;
		s2 = s2 + 1;
	}
	return (0);
}

/**
 * _strstr - locates a substring.
 * @haystack: takes parameter pointer to a string s which will be searched
 * @needle: a substring that will be searched for in haystack
 *
 * Return: a pointer to the matching substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *substring;
	int same;

	substring = _strchr(haystack, *(needle + 0));
	same = _strcmp(substring, needle);

	if (same == 0)
	{
		return (substring);
	}
	else
	{
		return (NULL);
	}
}
