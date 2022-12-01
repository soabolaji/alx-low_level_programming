#include "main.h"
#include <stdio.h>


/**
 * binary_to_uint - the function that convert a binary
 *		number to an unsigned int.
 * @b: a pointer that point to a string of 0 and chars
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		n = n * 2 + *b - '0';
		++b;
	}
	return (n);
}
