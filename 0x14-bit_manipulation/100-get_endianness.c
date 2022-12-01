#include "main.h"


/**
 * get_endianness - Funtion that checks the endianness
 * Return: 0 if big endian otherwise 1;
 */


int get_endianness(void)
{
	int size = 1;
	char *ness = (char *)&size;

	if (*ness == 1)
		return (1);

	return (0);
}
