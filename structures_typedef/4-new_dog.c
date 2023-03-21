#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: string
 * @age: float
 * @owner: string
 *
 * Return: NULL if function fails else a pointer to a new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ans;

	ans = malloc(sizeof(dog_t *));
	if (ans == NULL)
		return (NULL);
	ans->name = malloc(sizeof(char *));
	if (ans->name == NULL)
		return (NULL);
	strcpy((*ans).name, name);
	ans->age = age;
	ans->owner = malloc(sizeof(char *));
	if (ans->owner == NULL)
		return (NULL);
	strcpy((*ans).owner, owner);
	return (ans);
}
