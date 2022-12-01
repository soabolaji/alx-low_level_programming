#include "main.h"


/**
 * flip_bits - Function that returns the number of bits you would
 *		need to flip to get from one number to another
 * @n: the number of bits
 * @m: the number of flip n
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, bit = 0;

	while (flip > 0)
	{
		bit += (flip & 1);
		flip >>= 1;
	}

	return (bit);

}
