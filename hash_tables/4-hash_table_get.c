#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hast table struct
 * @key: the key, a string
 *
 * Return: the value associated with the element or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	unsigned long int index;

	if (ht == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		return (NULL);
	}
	while (key != ht->array[index]->key && ht->array[index]->next != NULL)
	{
		ht->array[index]->key = ht->array[index]->next->key;
	}
	value = ht->array[index]->value;
	return (value);
}
