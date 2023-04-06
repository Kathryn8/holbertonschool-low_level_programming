#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to a pointer to the start of the dlistint_t list
 * @idx: index of the list where the node should be created
 * @n: the integer to be added to data at the new node
 *
 * Return: pointer to the new node, or NULL if node could not be inserted
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *ptr;
	unsigned int i;

	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		printf("Error - malloc failed\n");
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	ptr = *h;
	if (ptr == NULL)
	{
		*h = new;
		return (*h);
	}
		i = 0;
		while (i < idx)
		{
			ptr = ptr->next;
			if (ptr == NULL)
			{
				return (NULL);
			}
			i = i + 1;
		}
		new->n = n;
	new->prev = ptr->prev;
	new->next = ptr;
	ptr->prev->next = new;
	ptr->prev = new;
	return (new);
}
