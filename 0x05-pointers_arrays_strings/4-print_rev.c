#include "main.h"


/**
 * print_rev - function that prints a string, in rever.
 *
 * @s: the pointer variable.
 *
 */


void print_rev(char *s)
{
	int lenth = 0;

	while (lenth >= 0)
	{
	if (s[lenth] == '\0')
	break;

	lenth++;

	}

	for (lenth--; lenth >= 0; lenth--)
	_putchar(s[lenth]);

	_putchar('\n');

}
