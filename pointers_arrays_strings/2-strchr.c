#include "main.h"
#include <stddef.h>

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
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
		i = i + 1;
	}
	if (ptr != NULL)
		return (ptr);
	else
		return (0);
}
