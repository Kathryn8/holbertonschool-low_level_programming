#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argc: count of arguments
 * @argv: array of pointers to strings that are arguments to the function
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
