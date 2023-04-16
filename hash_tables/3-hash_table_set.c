#include "hash_tables.h"

/**
 * create_ht_node - create a new node in the hash table
 * @key: the key, a string
 * @value: value associated with the key
 *
 * Return:the index at which the key value pair should be found
 */
hash_node_t *create_ht_node(const char *key, const char *value)
{
	hash_node_t *entry;

	entry = malloc(sizeof(*entry));
	if (entry == NULL)
	{
		return (NULL);
	}
	entry->key = strdup(key);
	if (entry->key == NULL)
	{
		free(entry);
		return (NULL);
	}
	entry->value = strdup(value);
	if (entry->value == NULL)
	{
		free(entry->key);
		free(entry);
		return (NULL);
	}
	return (entry);
}

/**
 * hash_table_set - add an element to the hash table
 * @ht: the hash table you want to add to
 * @key: the key, a string
 * @value: value associated with the key
 *
 * Return:the index at which the key value pair should be found
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *entry;

	if (ht == NULL || strlen(key) == 0 || value == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	entry = create_ht_node(key, value);
	if (entry == NULL)
	{
		return (0);
	}
	if (ht->array[index] != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			ht->array[index]->value = (char *)value;
			free(entry->key);
			free(entry->value);
			free(entry);
			return (1);
		}
	}
	entry->next = ht->array[index];
	ht->array[index] = entry;
	return (1);
}
