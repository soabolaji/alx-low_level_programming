#include <stdio.h>
#include "lists.h"


/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: the list_t pointer
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
	if (h->str == NULL)
	
	printf("[0] (nil))\n");
	else
	printf("[%d] %s\n", h->index, h->str);

	node++;
	h = h->next;
	}

	return (node);
}
