#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - executes a function over each element of an array.
 * @array: array to be iterated over
 * @size: size of the array
 * @action: pointer to a function that takes an int and returns nothing.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL && array != NULL)
	{
		int i;

		i = 0;
		while (i < (int)size)
		{
			action(array[i]);
			i = i + 1;
		}
	}
}
