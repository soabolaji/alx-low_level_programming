#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - function that deletes the head node of a listint_t
 *		linked list, and returns the head node’s data (n).
 * @head: the head pointer to the head of the node
 * Return: the head node's data, if the linked is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int del;

	if (*head == NULL)
		return (0);

	tmp = *head;
	del = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (del);
}
