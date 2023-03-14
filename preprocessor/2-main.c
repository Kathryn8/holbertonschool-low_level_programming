#include <stdio.h>

/**
 * main - print input file name
 *
 * Return: Always 0.
 */

int main(void)
{
	char *input = __FILE__;

	printf("%s\n", input);
	return (0);
}
