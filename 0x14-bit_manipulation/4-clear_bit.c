#include "main.h"

/**
 * clear_bit - the function that sets the value of a bit to 0 at a given index
 * @n: the number of bits
 * @index: is the index starting from 0 of the bit you want to set
 * Return: 1 if it works othrwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(*n) * 8) - 1))
	return (-1);
	*n &= ~(1 << index);
	return (1);
}
