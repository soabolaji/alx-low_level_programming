#include "main.h"
#include <stdio.h>

/**
 * main - function that checks for uppercase character.
 *
 * Return: 1 if c is upper case otherwise 0.
 *
 */

	int _isupper(int c)
	{
	c = 'A';

	if (c <= 'Z')
	{
	_putchar(1);
	}
	else
	{
	_putchar(0);
	}
	}

