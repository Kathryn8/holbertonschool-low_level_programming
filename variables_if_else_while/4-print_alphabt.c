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

	c = 'a';
	while (c != '{')
	{
		if (c == 'e' || c == 'q')
		{
			c += 1;
		}
		else
		{
			putchar(c);
			c += 1;
		}
	}
	putchar('\n');
	return (0);
}
