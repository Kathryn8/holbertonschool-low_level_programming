#include "main.h"

/**
 * _strncpy  - copies n bytes of string src to dest
 * if n is less than src, null byte is added.
 * @dest: destination string
 * @src: source string
 * @n: an integer
 *
 * Return: a string or pointer to a char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	if (n < i)
		dest[i] = '\0';
	return (dest);
}
