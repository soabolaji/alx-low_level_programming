#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * create_array - to creates an array of chars, and initializes it
 * with a specific char.
 *
 * @size: the size of the array...
 * @c: the specified character to initalize the array.
 *
 * Return: NULL if size is 0 otherwise pointer or Null.
 *
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
	return (NULL);

	for (index = 0; index < size; index++)
	array[index] = c;

	return (array);
}
