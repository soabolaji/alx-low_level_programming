#include "main.h"


/**
 * _isupper - function that checks for uppercase character.
 *
 * @c: check for upper case.
 *
 * Return: 1 if c is upper case otherwise 0.
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
