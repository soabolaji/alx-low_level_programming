#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * malloc_checked - to allocate memory using malloc.
 * @b: the memory to allocated
 *
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *memo = malloc(b);

	if (memo == NULL)
	exit(98);

	return (memo);
}
