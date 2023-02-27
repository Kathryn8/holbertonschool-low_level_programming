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
 * print_rev - print a string in reverse
 * @s: takes parameter pointer to a char
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length;

	length = _strlen(s) - 1;
	while (length >= 0)
	{
		_putchar(s[length]);
		length = length - 1;
	}
	_putchar('\n');
}
