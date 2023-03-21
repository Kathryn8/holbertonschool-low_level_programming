#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 *  contains a copy of the string given as a parameter
 * @str: string to be duplicated
 *
 * Return: a pointer to the duplicated string. It returns NULL if insufficient
 *  memory was available
 */

char *_strdup(char *str)
{
	char *new_str;
	int i;
	int j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i = i + 1;
	new_str = (char *)malloc(i + 1);
	if (new_str == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		new_str[j] = str[j];
		j = j + 1;
	}
	return (new_str);
}

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
	char *t_name;
	char *t_owner;

	ans = malloc(sizeof(dog_t *));
	if (ans == NULL)
		return (NULL);
	t_name = _strdup(name);
	ans->name = t_name;
	free(t_name);
	ans->age = age;
	t_owner = _strdup(owner);
	ans->owner = t_owner;
	free(t_owner);
	return (ans);
}
