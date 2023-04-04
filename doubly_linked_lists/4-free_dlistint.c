#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: a pointer to the head of list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *current;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
