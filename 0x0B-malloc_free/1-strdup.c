#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: the string
 *
 * Return: NULL if str is NULL,
 *
 */

char *_strdup(char *str)
{
	char *array;
	int index, lenth;

	if (str == NULL)
	return (NULL);

	for (lenth = 0; lenth <= *str; lenth++)

	array = malloc(sizeof(char) * lenth);

	if (array == NULL)
	return (NULL);

	for (index = 0; str[index]; index++)
	array[index] = str[index];

	array[lenth] = '\0';

	return (array);
}
