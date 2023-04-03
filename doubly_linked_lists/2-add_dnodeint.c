#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of dlistint_t list
 * @head: a pointer to the beginning of the list
 * @n: an integer to be stored in the new node
 *
 * Return:a pointer to the new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp_ptr;

	temp_ptr = malloc(sizeof(dlistint_t));
	if (temp_ptr == NULL)
	{
		printf("Malloc failed - error!\n");
		return (NULL);
	}
	temp_ptr->n = n;
	temp_ptr->prev = NULL;
	temp_ptr->next = *head;
	*head = temp_ptr;
	return (*head);
}
