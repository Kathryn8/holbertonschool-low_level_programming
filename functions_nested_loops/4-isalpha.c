#include "main.h"

/**
 * _isalpha - Entry point
 * @c: A single character
 *
 * Return: 1 if c is a letter (upper or lowercase), otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
