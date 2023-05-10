#include "hash_tables.h"

/**
 * hash_table_get - returns the value associated with the
 * element, or NULL if key couldn't be found
 * @ht: is the table
 * @key: is the given key
 * Return: the value associated with the element, or NULL
 * if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (!ht || !key)
		return (0);
	node = ht->array[key_index((const unsigned char *) key, ht->size)];

	while (node)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
