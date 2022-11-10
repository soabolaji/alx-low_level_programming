#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - to allocate memory to an array using malloc
 *
 * @nmemb: number of element in the array
 * @size: the number of bytes in the memory
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memo;
	char *til;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	return (NULL);

	memo = malloc(size * nmemb);

	if (memo == NULL)
	return (NULL);

	til = memo;

	for (index = 0; index < (size * nmemb); index++)
	til[index] = '\0';

	return (memo);
}
