#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * delete_dnodeint_at_index -  deletes the node at index of a linked list
 * @h: pointer to a pointer to the start of the dlistint_t list
 * @idx: index at which the node should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	dlistint_t *tmp;
	unsigned int i;

	i = 0;
	ptr = *head;
	tmp = NULL;
	if (ptr == NULL)
		return (-1);
	if (index == 0)
	{
		*head = ptr->next;
		if (ptr->next != NULL)
			ptr->next->prev = NULL;
		free(ptr);
		return (1);
	}
	while (i < index)
	{
		if (ptr == NULL)
			return (-1);
		ptr = ptr->next;
		i = i + 1;
	}
	tmp = ptr->prev;
	tmp->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = tmp;
	free(ptr);
	return (1);
}
