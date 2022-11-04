#include "main.h"


/**
 * _memcpy - To copy memory from source to destination.
 *
 * @dest: the destination to be copied to.
 * @n: the number of byte to be copied.
 * @src: the source to be copy from.
 *
 * Return: the point dest.
 *
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	*(dest + i) = *(src + i);

	return (dest);
}
