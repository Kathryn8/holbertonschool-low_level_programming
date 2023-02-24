#include "main.h"

/**
 * print_triangle - Entry point
 * @size: an integer
 *
 * Return: void
 */

void print_triangle(int size)
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
			col = size - 1;
			while (col > row)
			{
				_putchar(' ');
				col = col - 1;
			}
			col = 0;
			while (col <= row)
			{
				_putchar('#');
				col = col + 1;
			}
			_putchar('\n');
			row = row + 1;
		}
	}
}
