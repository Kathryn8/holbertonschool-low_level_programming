#include "main.h"

/**
 * _puts - prints a string
 * @str: takes parameter pointer to a char
 *
 * Return: void
 */

void _puts(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter = counter + 1;
	}
	_putchar('\n');
}
