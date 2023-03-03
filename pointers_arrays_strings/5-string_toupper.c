#include "main.h"

/**
 * string_toupper  - change all lowercase letter to uppercase
 * @s: pointer to a char
 *
 * Return: a string or pointer to a char
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i = i + 1;
	}
	return (s);
}
