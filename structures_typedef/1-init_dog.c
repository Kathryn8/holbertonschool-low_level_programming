#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: a pointer to the struct dog
 * @name: string
 * @age: float
 * @owner: string
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
