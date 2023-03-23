#include <stddef.h>

/**
 * print_name - prints name
 * @name: name of the person
 * @f: pointer to a function that takes a string and returns nothing.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
