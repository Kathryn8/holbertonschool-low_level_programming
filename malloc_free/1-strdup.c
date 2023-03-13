#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 *  contains a copy of the string given as a parameter
 * @str: string to be duplicated
 *
 * Return: a pointer to the duplicated string. It returns NULL if insufficient
 *  memory was available
 */

char *_strdup(char *str)
{
	char *new_str;
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
		i = i + 1;
	new_str = (char*)malloc(i + 1);
	if (new_str == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		new_str[j] = str[j];
		j = j + 1;
	}
	return (new_str);
}
