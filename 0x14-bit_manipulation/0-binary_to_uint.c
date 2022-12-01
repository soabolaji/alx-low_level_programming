#include "main.h"
#include <stdio.h>


/**
 * binary_to_unit - the function that convert a binary
 *		number to an unsigned int.
 * @b: a pointer that point to a string of 0 and chars
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int digit = 0, num = 1;
	int size;

	if (b == NULL)
		return (0);

	for (size = 0; b[size];)
		size++;

	for (size -= 1; size >= 0; size--)
	{
		if (b[size] != '0' && b[size] != '1')
			return (0);

		digit += (b[size] - '0') * num;
		num *= 2;
	}

	return (digit);
}
