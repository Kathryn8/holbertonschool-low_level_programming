#include <stddef.h>
#include "main.h"
#include <stdio.h>

/**
 * check_for_binary - checks a character if is a binary character
 * @ch: character to check
 *
 * Return: 0 for false, 1 if true (char is 1 or 0)
 */
int check_for_binary(char ch)
{
	if (ch == '1' || ch == '0')
	{
		return (1);
	}
	return (0);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if there is one or more chars\
 *  in the string b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int i;

	x = 0;
	i = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (check_for_binary(b[i]) == 0)
		{
			return (0);
		}
		x = x << 1;
		if (b[i] == '1')
		{
			x = x | 1;
		}
		i = i + 1;
	}
	return (x);
}
