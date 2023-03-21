#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: a pointer to the struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	if (d == NULL)
	{
		exit(1);
	}
	name = d->name;
	age = d->age;
	owner = d->owner;
	if (name != NULL)
		printf("Name: %s\n", name);
	else
		printf("Name: (nil)\n");
	printf("Age: %f\n", age);
	if (owner != NULL)
		printf("Owner: %s\n", owner);
	else
		printf("Owner: (nil)\n");
}
