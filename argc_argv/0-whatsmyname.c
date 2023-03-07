#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 *
 * Return: void
 */

int main(int argc, char*argv[])
{
        if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
