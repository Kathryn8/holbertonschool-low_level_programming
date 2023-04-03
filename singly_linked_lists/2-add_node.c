#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - length of a string
 * @s: takes parameter pointer to a char
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter = counter + 1;
	}
	return (counter);
}

/**
 * add_node - adds a new node to the beginning of a list_t list
 * @head: a pointer to a pointer to the first node
 * @str: a string to be stored in the struct
 *
 * Return: address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(temp));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = _strlen((char *)str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
