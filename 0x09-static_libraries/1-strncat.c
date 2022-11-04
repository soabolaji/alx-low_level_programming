#include "main.h"


/**
 * _strncat - Concatenate two strings.
 * @dest: the destination.
 * @src: the source.
 * @n: the nth length of string.
 *
 * Return: the dest.
 *
 */


char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int dest_lenth = 0;

	while (dest[count++])
	dest_lenth++;

	for (count = 0; src[count] && count < n; count++)
	dest[dest_lenth++] = src[count];

	return (dest);

}
