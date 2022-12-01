#include "main.h"


/**
 * set_bit - Function that sets the value of a bit to 1 at a given index
 * @n: the number of bits
 * @index: is the index starting from 0 of the bit
 * Return: 1 if it works otherwise -1
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
