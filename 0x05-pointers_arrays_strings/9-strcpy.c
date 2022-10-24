#include "main.h"


/**
 * _strcpy - function that copies the string pointed to by src,
 *
 * @dest: pointed to buffer.
 *
 * @src: the termination
 *
 * Return: Always point the destination.
 */


char *_strcpy(char *dest, char *src)
{
	int nex = 0;

	while (src[nex])
	{
	dest[nex] = src[nex];
	nex++;
	}

	return (dest);

}
