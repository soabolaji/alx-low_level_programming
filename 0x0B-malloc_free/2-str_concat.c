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
	char *str;
	int i, index = 0, size = 0;

	if (s1 == NULL || s2 == NULL)
	s1 = s2 = "";

	for (i = 0; i <= *s1; i++)
	{
	}
	for (index = 0; index <= *s2; index++)
	{
	}

	str = malloc(sizeof(char) * (i + index + 1));

	if (str == NULL)
	return (NULL);

	while (*s1)
	{
	str[size] = *s1;
	size++;
	s1++;
	}

	while (*s2)
	{
	str[size] = *s2;
	size++;
	s2++;
	}

	return (str);
}
