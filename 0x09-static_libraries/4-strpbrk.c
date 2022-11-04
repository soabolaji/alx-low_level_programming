#include "main.h"


/**
 * _strpbrk - to search a string for any set of bytes.
 *
 * @s: the set of string s
 *
 * @accept: set of bytes in string accept.
 *
 * Return: NULL value
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int index, n;

	for (index = 0; *(s + index) != '\0'; index++)
	{

	for (n = 0; *(accept + n) != '\0'; n++)
	{

	if (*(s + index) == *(accept + n))

	return (s + index);

	}

	}

	return ('\0');

}
