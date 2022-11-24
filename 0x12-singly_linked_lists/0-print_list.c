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
	printf("[0] (nil)\n");

	else
	printf("[%d] %s\n", b->index, b->str);

	node++;
	b = b->next;
	}

	return (node);
}
