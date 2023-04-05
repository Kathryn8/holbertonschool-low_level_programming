#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list.
 * @head: pointer to a dlistint list
 *
 * Return: the sum of a data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		return (head->n + sum_dlistint(head->next));
	}
	return (0);
}
