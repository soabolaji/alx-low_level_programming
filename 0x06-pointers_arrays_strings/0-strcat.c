#include "main.h"


/**
 * _strcat - function that concatenates two strings.
 *
 * @src: the appends string.
 *
 * @dest: the destination string.
 *
 * Return: pointer to the dest.
 *
 */


char *_strcat(char *dest, char *src)
{
	int count = 0;
	int dest_lenth = 0;

	while (dest[count++])
	dest_lenth++;

	for (count = 0; src[count]; count++)
	dest[dest_lenth++] = src[count];

	return (dest);

}
