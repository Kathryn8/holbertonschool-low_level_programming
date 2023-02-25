#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int H;
	int T;
	int U;

	H = 0;
	while (H <= 9)
	{
		T = 0;
		while (T <= 9)
		{
			U = 0;
			while (U <= 9)
			{
				if (H < T && T < U)
				{
					putchar(H + '0');
					putchar(T + '0');
					putchar(U + '0');
					if (!(H == 7 && T == 8 && U == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				U = U + 1;
			}
			T = T + 1;
		}
		H = H + 1;
	}
	putchar('\n');
	return (0);
}
