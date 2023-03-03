#include "main.h"
#include <stdio.h>

/**
 * leet  - encode a string into 1337 c0d3
 * @s: pointer to a char
 *
 * Return: a string or pointer to a char
 */

char *leet(char *s)
{
	int i = 0;
	char let[] = "aeotlAEOTL";
	char num[] = "4307143071";
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (let[j] != '\0')
		{
			if (s[i] == let[j])
				s[i] = num[j];
			j = j +1;
		}
		i = i + 1;
	}
	return (s);
}
