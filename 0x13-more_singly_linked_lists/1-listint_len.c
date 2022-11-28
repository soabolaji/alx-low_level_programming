#include "lists.h"
#include <stdio.h>


/**
 * listint_len - function that returns the number of
 *		elements in a linked listint_t list.
 * @h: head pointer to the node
 * Return: the number of elements in the linked
 */

size_t listint_len(const listint_t *h)
{
	size_t n_node = 0;

	while (h)
	{
		n_node++;
		h = h->next;
	}

	return (n_node);
}
