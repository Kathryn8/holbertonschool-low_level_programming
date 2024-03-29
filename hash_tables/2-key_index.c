#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the key, s string
 * @size: size of the array of the hash table
 *
 * Return:the index at which the key value pair should be found
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
