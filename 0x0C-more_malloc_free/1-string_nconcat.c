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
	char *memcat;
	unsigned int index, size = n;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (index = 0; s1[index]; index++)
	size++;

	memcat = malloc(sizeof(char) * (size + 1));

	if (memcat == NULL)
	return (NULL);

	size = 0;

	for (index = 0; s1[index]; index++)
	memcat[size++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
	memcat[size++] = s2[index];

	memcat[size] = '\0';

	return (memcat);

}
