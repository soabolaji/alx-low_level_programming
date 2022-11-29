#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: the head pointer to the node
 * Return: the address of the node where loop start or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *count, *rel;

	if (head == NULL || head->next == NULL)
		return (NULL);

	count = head->next;
	rel = (head->next)->next;

	while (rel)
	{
		if (count == rel)
		{
			count = head;

			while (count != rel)
			{
				count = count->next;
				rel = rel->next;
			}

			return (count);
		}

		count = count->next;
		rel = (rel->next)->next;
	}
	return (NULL);
}
