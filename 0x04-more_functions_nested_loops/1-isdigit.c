#include "main.h"


/**
 * _isdigit - Function that check for digit.
 *
 * @c: to check for digit.
 *
 * Return: 1 if it is digit, otherwise 0.
 *
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
