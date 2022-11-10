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
	unsigned int i;
	unsigned int j;
	unsigned int s1_len;
	unsigned int concat_len;
	char *concat;

	s1_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		s1_len++;

	concat_len = s1_len + n;

	concat = malloc(sizeof(char) * (concat_len + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		concat[i] = s2[j];
	}

	concat[i] = '\0';

	return (concat);
}
