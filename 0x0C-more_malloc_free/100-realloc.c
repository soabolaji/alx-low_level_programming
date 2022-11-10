#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - to reallocate the memory block
 * @ptr: is a pointer to the memory peeviousely allocated...
 * @new_size: is the new size in byte to the new memory block
 * @old_size: is the size in byte of the allocated space for ptr
 *
 * Return: a pointer to the reallocated memory
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memo;
	unsigned int index;
	char *til, *ptr2;

	if (new_size == old_size)
	return (ptr);

	if (ptr == NULL)
	{
	memo = malloc(new_size);

	if (memo == NULL)
	return (NULL);

	return (memo);
	}

	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}

	ptr2 = ptr;

	memo = malloc(sizeof(*ptr2) * new_size);

	if (memo == NULL)
	{
	free(ptr);
	return (NULL);
	}

	til = memo;

	for (index = 0; index < old_size && index < new_size; index++)
	til[index] = *ptr2++;

	free(ptr);
	return (memo);
}
