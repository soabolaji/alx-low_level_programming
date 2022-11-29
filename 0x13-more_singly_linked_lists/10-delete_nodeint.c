#include "lists.h"
#include <stdio.h>


/**
 * delete_nodeint_at_index - function that deletes the
 *		node at index index of a listint_t linked list.
 * @head: the head pointer
 * @index: the index of the node that should be deleted
 * Return: 1 if succeeded otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *tmp = *head;
	unsigned int node;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (tmp->next == NULL)
			return (-1);

		tmp = tmp->next;
	}

	del = tmp->next;
	tmp->next = del->next;
	free(del);
	return (1);
}
