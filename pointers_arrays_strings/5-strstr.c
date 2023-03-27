#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: String being searched
 * @needle: Substring being searched for
 *
 * Return: Pointer to beginning of located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*needle == '\0')
	{
		return (haystack);
	}
	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{

			j = 0;
			while (haystack[i] == needle[j])
			{
				i = i + 1;
				j = j + 1;
			}
			if (needle[j] == '\0')
				return (haystack + i - j);
		}
		i = i + 1;
	}
	return (0);
}
