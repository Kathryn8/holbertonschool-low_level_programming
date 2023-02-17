#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* variable initialisation */
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	/* initialise variables to store the sizeof function */
	int Sc = sizeof(c);
	int Si = sizeof(i);
	int Sl = sizeof(li);
	int Sll = sizeof(lli);
	int Sf = sizeof(f);
	/* printf function - prints to screen */
	printf("Size of a char: %d bytes(s)\n", Sc);
	printf("Size of a int: %d bytes(s)\n", Si);
	printf("Size of a long int: %d bytes(s)\n", Sl);
	printf("Size of a long long int: %d bytes(s)\n", Sll);
	printf("Size of a float: %d bytes(s)\n", Sf);

	return (0);
}
