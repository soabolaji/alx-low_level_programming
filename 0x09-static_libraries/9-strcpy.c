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
	int nex = 0, i;

	while (src[nex] != '\0')
	{
		nex++;
	}
	for (i = 0; i < nex; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);

}
