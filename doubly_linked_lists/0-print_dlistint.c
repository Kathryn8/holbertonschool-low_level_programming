#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints the data in a doubly linked list
 * @h: data type of dlistint_t
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
		size = size + 1;
	}
	return (size);
}
