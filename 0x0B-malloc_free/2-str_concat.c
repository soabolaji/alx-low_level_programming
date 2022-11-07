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
	unsigned int i, index = 0, size = 0;
	unsigned int x, y;

	if (s1 == NULL || s2 == NULL)
	s1 = s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	;

	for (index = 0; s2[index] != '\0'; index++)
	;

	size = i + index;

	concat_str = malloc(sizeof(char) * (size + 1));
	if (concat_str == NULL)
	return (NULL);

	for (x = 0; x < i; x++)
	concat_str[x] = s1[x];

	for (y = 0; y < index; x++, y++)
	concat_str[x] = s2[y];

	return (concat_str);
}
