#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: unsigned long int, size of the array
 *
 * Return: a pointer to the newly created hash table, or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hashtable;
	unsigned long int i;

	if (size == 0)
	{
		return (NULL);
	}
	new_hashtable = malloc(sizeof(*new_hashtable));
	if (new_hashtable == NULL)
	{
		return (NULL);
	}
	new_hashtable->size = size;
	new_hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hashtable->array == NULL)
	{
		free(new_hashtable);
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		new_hashtable->array[i] = NULL;
		i = i + 1;
	}
	return (new_hashtable);
}
