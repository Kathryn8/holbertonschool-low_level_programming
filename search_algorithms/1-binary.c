#include "search_algos.h"
#define ODD 1
#define EVEN 0

/**
 * binary_search - short description
 * @array: a int *data type variable
 * @size: a size_t data type variable
 * @value: a int data type variable
 *
 * Return: type is int
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, j;
	int flag = EVEN;

	if (array == NULL || size < 2)
	{
		return (-1);
	}
	j = 0;
	while (j < size)
	{
		if (j == 0)
		{
			printf("Searching in array: %d", array[j]);
		}
		else
		{
			printf(", %d", array[j]);
		}
		j = j + 1;
	}
	printf("\n");
	if (size % 2 == 0)
	{
		flag = EVEN;
		i = (size / 2) - 1;
		j = size / 2;
		if (j == 2)
			i = size / 2;
	}
	else
	{
		flag = ODD;
		i = size / 2;
		j = (size / 2) + 1;
		if (i < 2)
			j = size / 2;
	}
	printf("size = %ld / i = %ld / j = %ld\n", size, i, j);
	if (array[i] == value)
	{
		return (i);
	}
	if (value < array[i])
	{
		return (binary_search(array, i, value));
	}
	else
	{
		return (binary_search(array + j, i, value));
	}
}
