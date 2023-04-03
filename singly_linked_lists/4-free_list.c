#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to a pointer to the first node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
