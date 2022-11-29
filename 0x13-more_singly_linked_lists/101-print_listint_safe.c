#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - the function to count th number of nodes in a loop
 * @head: the head pointer to the node
 * Return: 0 if not loop otherwise the numbr of nodes
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *count, *size;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	count = head->next;
	size = (head->next)->next;

	while (size)
	{
		if (count == size)
		{
			count = head;
			while (count != size)
			{
				node++;
				count = count->next;
				size = size->next;
			}

			count = count->next;
			while (count != size)
			{
				node++;
				count = count->next;
			}

			return (node);
		}

		count = count->next;
		size = (size->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - the function that print a listint_t linked list
 * @head: the head pointr to the node
 * Return: the number of the nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node, rel = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (rel = 0; rel < node; rel++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);

	}

	return (node);
}
