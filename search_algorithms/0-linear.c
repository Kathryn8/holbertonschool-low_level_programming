#include "search_algos.h"

/**
 * linear_search - short description
 * @array: a int *data type variable
 * @size: a size_t data type variable
 * @value: a int data type variable
 *
 * Return: type is int
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i = i + 1;
	}
	return (-1);
}
