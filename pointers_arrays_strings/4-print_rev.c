#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: takes parameter pointer to a char
 *
 * Return: void
 */

void print_rev(char *s)
{
	int strlen;
	int counter;

	strlen = 0;
	while (s[strlen] != '\0')
	{
		strlen = strlen + 1;
	}
	counter = strlen;
	while (counter >= 0)
	{
		_putchar(s[counter]);
		counter = counter - 1;
	}
	_putchar('\n');
}
