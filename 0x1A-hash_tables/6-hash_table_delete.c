#include "hash_tables.h"

/**
 *  free_recursively - frees a linked list of hash nodes
 *  @node: is the head of the linked list
 *  Return: Nothing
 */
void free_recursively(hash_node_t *node)
{
	if (node)
	{
		free_recursively(node->next);
		free(node->key);
		free(node->value);
		free(node);
	}
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: is the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	size_t i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			free_recursively(node);
		}
		free(ht->array);
		free(ht);
	}
}
