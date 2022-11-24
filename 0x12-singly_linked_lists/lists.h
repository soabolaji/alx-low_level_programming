#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdlib.h>

/**
 * struct list_k - singly linked list
 * @str: string - (malloc'ed string)
 * @index: length of the string
 * @next: points to the next node
 *
 */
typedef struct list_k
{
	char *str;
	unsigned int index;
	struct list_k *next;
} list_t;

/* Functions prototype */
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */
