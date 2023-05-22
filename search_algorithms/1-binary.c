#include "search_algos.h"
#define ODD 1
#define EVEN 0

/**
 * print_array - short description
 * @array: a int *data type variable
 * @left: a int data type variable
 * @right: a int data type variable
 *
 * Return: type is void
 */

void print_array(int *array, int left, int right)
{
	int i;

	i = 0;
	while (left <= right)
	{
		if (i == 0)
		{
			printf("Searching in array: %d", array[left]);
		}
		else
		{
			printf(", %d", array[left]);
		}
		left = left + 1;
		i = i + 1;
	}
	printf("\n");
}

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
	size_t left, right, m;

	if (array == NULL)
	{
		return (-1);
	}
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		print_array(array, left, right);
		m = floor((left + right) / 2);
		if (array[m] < value)
		{
			left = m + 1;
		}
		else if (array[m] > value)
		{
			right = m - 1;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}
