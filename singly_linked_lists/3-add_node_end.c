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
 * add_node_end - adds a new node to the end of a list_t list
 * @head: a pointer to a pointer to the first node
 * @str: a string to be stored in the struct
 *
 * Return: address of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *ptr;

	ptr = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = _strlen((char *)str);
	temp->next = NULL;
	if (ptr == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (*head);
}
