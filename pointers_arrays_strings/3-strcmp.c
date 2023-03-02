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
 * _strcmp  - compares two strings
 * @s1: destination string
 * @s2: source string
 *
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	int s1_len;
	int s2_len;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	if (s1_len > s2_len)
		return (-1 * s1_len);
	else if (s1_len < s2_len)
		return (s1_len);
	else
		return (0);
}
