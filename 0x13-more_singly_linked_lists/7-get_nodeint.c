#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - function that returns the
 *			node of a listint_t linked list.
 * @head: the head pointer to the node of the linked
 * @index: the index of the node starting at 0
 * Return: the nth node of a linked and NULL if node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nret;

	for (nret = 0; nret < index; nret++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
