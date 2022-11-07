#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * str_concat - to concatenate two strings
 *
 * @s1: string one
 * @s2: string two
 * Return: NULL on failure otherwise treat it as empty string.
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, index = 0, size = 0;

	if (s1 == NULL || s2 == NULL)
	s1 = s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
	size++;

	concat_str = malloc(sizeof(char) * size);
	if (concat_str == NULL)
	return (NULL);

	for (i = 0; s1[i]; i++)
	concat_str[index++] = s1[i];

	for (i = 0; s2[i]; i++)
	concat_str[index++] = s2[i];

	return (concat_str);
}
