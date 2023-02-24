#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: an integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int row_counter;
	int col_counter;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		row_counter = 0;
		while (row_counter < n)
		{
			col_counter = 0;
			while (col_counter < row_counter)
			{
				_putchar(' ');
				col_counter = col_counter + 1;
			}
			_putchar('\\');
			_putchar('\n');
			row_counter = row_counter + 1;
		}
	}
}
