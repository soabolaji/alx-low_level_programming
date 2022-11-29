#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - function that returns the
 *		sum of all the data(n) of a linked list
 * @head: the head pointer to the node
 * Return: the sum of all data, if the list is empty return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
