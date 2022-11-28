#include "lists.h"
#include <stdio.h>


/**
 * add_nodeint_end - function that adds a new node
 *	at the end of a listint_t list.
 * @head: head pointer to nodes
 * @n: the number of element in the linked
 * Return: the address of the new element and NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *end;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
	return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	*head = n_node;

	else
	{
		end = *head;
		while (end->next != NULL)
		end = end->next;
		end->next = n_node;
	}

	return (*head);
}
