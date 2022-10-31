#include "main.h"


/**
 * _strspn - to get the length of a prefix substring.
 * @s: the strings
 * @accept: byte container
 *
 * Return: the number of byte in the initial segment of s.
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte;
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{

	if (*s == accept[i])
	{
		byte++;
		break;
	}

	else if (accept[i + 1] == '\0')
		return (byte);

	}

	s++;

	}

	return (byte);

}
