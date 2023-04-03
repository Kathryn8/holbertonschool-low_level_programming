#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - prints the data in a doubly linked list
 * @h: data type of dlistint_t
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		size = size + 1;
	}
	return (size);
}
