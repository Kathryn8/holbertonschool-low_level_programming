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
 * str_concat - concatenates two strings
 * @s1: string to be duplicated
 * @s2: string to be added to the contents of s1
 *
 * Return: pointer that should point to a newly allocated space in memory which
 *  contains the contents of s1, followed by the contents of s2, and null
 *  terminated
 *  */

char *str_concat(char *s1, char *s2)
{
	char *new;
	int i;
	int j;
	int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = _strlen(s1) + _strlen(s2);
	new = (char *)malloc(len + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i = i + 1;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		new[i] = s2[j];
		i = i + 1;
		j = j + 1;
	}
	return (new);
}
