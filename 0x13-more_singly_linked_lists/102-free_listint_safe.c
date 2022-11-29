#include "lists.h"
#include <stdio.h>

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - function that count the number of node in th loop
 * @head: the head pointer to the node
 * Return: 0 if its looped otherwise the number of node
 *
 */

size_t looped_listint_count(listint_t *head)
{
	listint_t *count, *rel;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	count = head->next;
	rel = (head->next)->next;

	while (rel)
	{
		if (count == rel)
		{
			count = head;
			while (count != rel)
			{
				node++;
				count = count->next;
				rel = rel->next;
			}

			count = count->next;
			while (count != rel)
			{
				node++;
				count = count->next;
			}

			return (node);

		}

		count = count->next;
		rel = (rel->next)->next;
	}

	return (0);

}

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: the head pointer
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t node, pet;

	node = looped_listint_count(*h);

	if (node == 0)
	{
		for (; h != NULL && *h != NULL; node++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}
	else
	{
		for (pet = 0; pet < node; pet++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;

	}

	h = NULL;

	return (node);
}
