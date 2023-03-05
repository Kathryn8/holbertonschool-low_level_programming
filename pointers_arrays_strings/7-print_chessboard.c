#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: Array being evaluated
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j = j + 1;
		}
			_putchar('\n');
		i = i + 1;
	}
}
