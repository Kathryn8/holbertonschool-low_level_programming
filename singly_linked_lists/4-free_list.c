#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to a pointer to the first node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *current;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
