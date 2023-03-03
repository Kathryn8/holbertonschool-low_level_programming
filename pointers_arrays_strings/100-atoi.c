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
 * _isdigit - tests a char to see if its a digit between 0 and 9.
 * @c: a char
 *
 * Return: 1 if true 0 if false
 */

int _isdigit(char c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * rev_string - reverse a string
 * @s: takes parameter pointer to a char
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length;
	int tmp;
	int q;

	length = _strlen(s) - 1;
	q = 0;
	while (q <= (length / 2))
	{
		tmp = s[q];
		s[q] = s[length - q];
		s[length - q] = tmp;
		q = q + 1;
	}
}

/**
 * _atoi - convert string to an integer
 * @s: takes parameter pointer to a string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i, j, k;
	int minus;
	int ans;
	char first[98];

	j = 0;
	while (s[j] != '\0')
	{
		if ((_isdigit(s[j - 1]) == 0) && (_isdigit(s[j]) == 1))
		{
			first[0] = s[j];
			break;
		}
		j = j + 1;
	}
	i = 0;
	minus = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus = minus + 1;
		if ((_isdigit(s[i]) == 1) && (_isdigit(s[i + 1]) == 0))
		{
			first[i + 1] = '\0';
			break;
		}
		i = i + 1;
	}
	k = 0;
	ans = 0;
	while (first[k] != '\0')
	{
		ans = (ans * 10) + (first[k] - '0');
		k = k + 1;
	}
	return (ans);
}
