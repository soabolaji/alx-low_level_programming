#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: the head pointer to the node
 * Return: a pointer to the first of the reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward, *backward;

	if (head == NULL || *head == NULL)
		return (NULL);

	backward = NULL;

	while ((*head)->next != NULL)
	{
		forward = (*head)->next;
		(*head)->next = backward;
		backward = *head;
		*head = forward;
	}

	(*head)->next = backward;

	return (*head);

}
