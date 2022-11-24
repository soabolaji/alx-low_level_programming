#include <stdio.h>
#include "lists.h"


/**
 * print_list - function that prints all the elements of a list_t list.
 * @b: the list_t pointer
 * Return: the number of nodes
 */

size_t print_list(const list_t *b)
{
	size_t node = 0;

	while (b)
	{
	if (b->str == NULL)
	{
	printf("[%u] (nil))\n", b->index);

	b = b->next;
	++node;
	continue;
	}
	printf("[%d] %s\n", b->index, b->str);

	b = b->next;
	node++;
	}

	return (node);
}
