#include "main.h"

/**
 * print_square - Entry point
 * @size: an integer
 *
 * Return: void
 */

void print_square(int size)
{
	int row;
	int col;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		row = 0;
		while (row < size)
		{
			col = 0;
			while (col < size)
			{
				_putchar('#');
				col = col + 1;
			}
			_putchar('\n');
			row = row + 1;
		}
	}
}
