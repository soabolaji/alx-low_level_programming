#include "main.h"


/**
 * _memset - Fill the first n b yte pointed to by the pointer.
 *
 * @s: the pointer of char type.
 *
 * @n: the number of byte to be filled.
 *
 * @b: the constant byte to fill the first n byte.
 *
 * Return: the pointer
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *mem = s;
	unsigned char value = b;

	for (i = 0; i < n; i++)
	mem[i] = value;

	return (mem);
}
