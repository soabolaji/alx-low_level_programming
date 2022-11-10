#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * string_nconcat - to memcatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes
 * Return: NULL if the function fails...
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int num;
	unsigned int size;
	unsigned int length;
	char *memconcat;

	size = 0;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (i = 0; s1[i]; i++)
	size++;

	length = size + n;

	memconcat = malloc(sizeof(char) * (length + 1));
	if (memconcat == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
	memconcat[i] = s1[i];
	}

	for (num = 0; num < n; num++, i++)
	{
	memconcat[i] = s2[num];
	}

	memconcat[i] = '\0';

	return (memconcat);
}
