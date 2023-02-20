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
		printf("%c", c);
		c += 1;
	}
	printf("\n");
	return (0);
}
