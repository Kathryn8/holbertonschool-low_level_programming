#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to a doubly linked list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the nth node or NULL if that node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	ptr = head;
	i = 0;
	while (i < index)
	{
		ptr = ptr->next;
		if (ptr == NULL)
		{
			return (NULL);
		}
		i = i + 1;
	}
	return (ptr);
}
