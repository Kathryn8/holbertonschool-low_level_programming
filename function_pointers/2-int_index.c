#include <stddef.h>
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: number of elements in the array
 * @cmp: pointer to a function that compares values
 *
 * Return: the index of the first element for which the cmp function does not
 *  return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i = i + 1;
		}
		return (-1);
	}
	return (-1);
}
