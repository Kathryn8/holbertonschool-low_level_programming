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

	c = '0';
	while (c != ':')
	{
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
