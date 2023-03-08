#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check_number - Entry point
 * @c: A pointer to a string
 *
 * Return: 1 if string is only comprised of digits, otherwise 0.
 */

int check_number(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (isdigit(s[i]) != 0)
			i = i + 1;
		else
			return (0);
	}
	return (1);
}

/**
 * main - Write a program that multiplies two numbers.
 * @argc: count of arguments
 * @argv: array of pointers to strings that are arguments to the function
 *
 * Return: void
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		i = 1;
		sum = 0;
		while (argv[i])
		{
			if (check_number(argv[i]) == 1)
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i = i + 1;
		}
	}
	printf("%i\n", sum);
	return (0);
}
