#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - function that adds a new node at the
 * beginning of a listint_t list.
 * @head: head pointer of the node
 * @n: number of elements in the linked
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nadd;

	nadd = malloc(sizeof(listint_t));
	if (nadd == NULL)
		return (NULL);

	nadd->n = n;
	nadd->next = *head;

	*head = nadd;

	return (nadd);
}
