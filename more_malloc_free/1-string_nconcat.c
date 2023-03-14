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
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: unsigned integer
 *
 * Return: returned pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cc;
	int new_len;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= (unsigned int) _strlen(s2))
		new_len = _strlen(s1) + _strlen(s2);
	else
		new_len = _strlen(s1) + n;
	cc = malloc(new_len);
	if (cc == NULL)
		return (NULL);
	i = 0;
	cc[new_len] = '\0';
	while (i < _strlen(s1))
	{
		cc[i] = s1[i];
		i = i + 1;
	}
	j = 0;
	while ((unsigned int)j < n && s2[j] != '\0')
	{
		cc[i] = s2[j];
		j = j + 1;
		i = i + 1;
	}
	return (cc);
}
