#include "main.h"
#include <stdio.h>

/**
 * is_word_separator  - check if character is a word separator
 * @c: character
 *
 * Return: 1 if true, 0 if false
 */

int is_word_separator(char c)
{
	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '('\
			     , ')', '{', '}', '\0'};
	int i = 0;

	while (separators[i] != '\0')
	{
		if (c == separators[i])
			return (1);
		i = i + 1;
	}
	return (0);
}

/**
 * cap_string  - capitalize each word of a string
 * @s: pointer to a char
 *
 * Return: a string or pointer to a char
 */

char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && (i == 0))
			s[i] = s[i] - 32;
		if ((s[i] >= 'a' && s[i] <= 'z') && \
		    (is_word_separator(s[i - 1]) == 1))
			s[i] = s[i] - 32;
		i = i + 1;
	}
	return (s);
}
