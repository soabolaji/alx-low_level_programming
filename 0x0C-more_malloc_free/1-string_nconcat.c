#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * string_nmemcat - to memcatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes
 * Return: NULL if the function fails...
 */

char *string_nmemcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, co, co_2;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n < j)
	j = n;

	j += i;
	arr = malloc(sizeof(char *) * (j + 1));

	if (arr == NULL)
	return (NULL);

	for (co = 0; co < i; co++)
	arr[co] = s1[co];
	for (co_2 = 0; co < j; co_2++)
	{
	arr[co] = s2[co_2];
	co++;
	}
	co++;
	arr[co] = '\0';
	return (arr);
}
