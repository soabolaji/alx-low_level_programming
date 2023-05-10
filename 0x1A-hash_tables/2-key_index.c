#include "hash_tables.h"

/**
 * key_index - Returns the index at which the key/value pair should be stored
 * in the array of the hash table
 * @key: is the string key
 * @size: is the size of the table
 * Return: The key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key)
		return (0);
	return (hash_djb2(key) % size);
}
