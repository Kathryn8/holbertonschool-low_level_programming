#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of dlistint_t list
 * @head: a pointer to the beginning of the list
 * @n: an integer to be stored in the new node
 *
 * Return:a pointer to the new element, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp_ptr;

	tmp_ptr = *head;
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		printf("Error - malloc failed\n");
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (tmp_ptr == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp_ptr->next != NULL)
	{
		tmp_ptr = tmp_ptr->next;
	}
	new_node->prev = tmp_ptr;
	tmp_ptr->next = new_node;
	return (*head);
}
