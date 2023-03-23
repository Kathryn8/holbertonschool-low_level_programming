#include "3-calc.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/**
 * op_add - addition of two integers
 * @a: integer
 * @b: integer
 *
 * Return: integer solution
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of two integers
 * @a: integer
 * @b: integer
 *
 * Return: integer solution
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two integers
 * @a: integer
 * @b: integer
 *
 * Return: integer solution
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two integers
 * @a: integer
 * @b: integer
 *
 * Return: integer solution or error if b is zero
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulo of two integers
 * @a: integer
 * @b: integer
 *
 * Return: integer solution or error if b is zero
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
