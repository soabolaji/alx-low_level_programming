#include "lists.h"
#include <stdio.h>


/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head double pointer to the node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

}
