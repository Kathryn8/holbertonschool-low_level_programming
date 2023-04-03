#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: data type list_t is a struct list_s, node of linked list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;
	list_t *temp = (list_t *)h;

	while (temp != NULL)
	{
		temp = temp->next;
		size = size + 1;
	}

	return (size);
}
