#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * array_range - to create array of integers
 * @min: the smallest integer
 * @max: the biggest integer
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int length;
	int index;

	if (min > max)
	return (NULL);

	length = max - min + 1;

	array = malloc(sizeof(int) * length);

	if (array == NULL)
	return (NULL);

	for (index = 0; index < length; index++)
	array[index] = min++;

	return (array);
}
