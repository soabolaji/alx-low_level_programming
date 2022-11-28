#include "lists.h"
#include <stdio.h>

/**
 * print_listint - to prints all the elements of a listint_t list.
 * @h: head pointer to the nodes
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n_node = 0;

	while (h)
	{
		n_node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n_node);
}
