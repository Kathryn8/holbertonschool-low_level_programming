#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	char C;

	c = 'a';
	while (c != '{')
	{
		putchar(c);
		c += 1;
	}
	C = 'A';
	while (C != '[')
	{
		putchar(C);
		C += 1;
	}
	putchar('\n');
	return (0);
}
