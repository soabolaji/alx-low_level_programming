#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - function to insert a new node at agiven position.
 * @head: the head pointer to the node
 * @idx: is the index of the list where the new node should be added
 * @n: the new node to be inserted
 * Return: the address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *index, *tmp = *head;
	unsigned int node;

	index = malloc(sizeof(listint_t));
	if (index == NULL)
		return (NULL);

	index->n = n;

	if (idx == 0)
	{
		index->next = tmp;
		*head = index;
		return (index);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
	}

	index->next = tmp->next;
	tmp->next = index;

	return (index);
}
