#include "lists.h"
#include <stddef.h>

/**
 * list_len - Finds the number of elements in
 * a linked list_t list.
 * @h: The linked list_t list.
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t lenth = 0;

	while (h)
	{
	h = h->next;
	++lenth;
	}

	return (lenth);
}
