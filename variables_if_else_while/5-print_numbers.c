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

	c = 0;
	while (c != 10)
	{
		printf("%d", c);
		c += 1;
	}
	printf("\n");
	return (0);
}
