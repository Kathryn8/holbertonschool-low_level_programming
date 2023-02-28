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
 * puts2 - print every other character in a string, beginning with first
 * @str: takes parameter pointer to a char
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (i < _strlen(str))
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
