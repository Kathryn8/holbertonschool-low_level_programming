#include "hash_tables.h"

void print_list(const hash_node_t *h, int k);

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hast table struct
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int k = 0;

	if (ht == NULL)
	{
		exit(-1);
	}
	printf("{");
	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL && ht->array[i]->next != NULL)
		{
			print_list(ht->array[i], k);
		}
		else if (ht->array[i] != NULL)
		{
			if (k == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			k = 1;
		}
		i = i + 1;
	}
	printf("}\n");
}

/**
 * print_list - prints the data in a linked list
 * @h: data type of hash_node_t
 * @k: counter integer to determine whether to print a cmma or not
 *
 * Return: void
 */

void print_list(const hash_node_t *h, int k)
{
	const hash_node_t *temp = h;

	while (temp != NULL)
	{
		if (k == 1)
		{
			printf(", ");
		}
		printf("'%s': '%s'", temp->key, temp->value);
		k = 1;
		temp = temp->next;
	}
}
