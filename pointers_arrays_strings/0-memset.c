#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: takes parameter pointer to a string
 * @b: contant byte to fill memory
 * @n: number of byes to be filled
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i = i + 1;
	}
	return (s);
}
