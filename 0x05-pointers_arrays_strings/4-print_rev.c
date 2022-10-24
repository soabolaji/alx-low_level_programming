#include "main.h"


/**
 * print_rev - function that prints a string, in rever.
 *
 * @s: the pointer variable.
 *
 */


void print_rev(char *s)
{
	int leth = 0;
	int index;

	while (s[index++])
	leth++;

	for (index = leth - 1; index >= 0; index--)
	_putchar(s[index]);

	_putchar('\n');

}
