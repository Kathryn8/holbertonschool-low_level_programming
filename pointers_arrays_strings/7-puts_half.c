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
 * puts_half - print he second half of a string
 * @str: takes parameter pointer to a char
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;

	if ((_strlen(str) % 2) == 0)
	{
		i = _strlen(str) / 2;
	} else
	{
		i = (_strlen(str) - 1) / 2;
	}
	while (i < _strlen(str))
	{
		_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
}
