#include "main.h"


/**
 * _strncpy - function to copy string
 *
 * @dest: Copy destination.
 *
 * @src: source copy.
 *
 * @n: integer variable.
 *
 * Return: dest.
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int nex = 0;
	int src_lenth = 0;

	while (src[nex++])
	src_lenth++;

	for (nex = 0; src[nex] && nex < n; nex++)
	dest[nex] = src[nex];

	for (nex = src_lenth; nex < n; nex++)
	dest[nex] = '\0';

	return (dest);

}
