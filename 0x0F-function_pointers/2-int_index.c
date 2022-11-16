#include <stdio.h>
#include "function_pointers.h"


/**
 * int_index - function that searches for integers
 * @array: array of integers to be search
 * @size: number of element in the array
 * @cmp: pointer to the function to be used
 * Return: nothing
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
