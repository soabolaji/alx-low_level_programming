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
	int nex;

	while (s[nex++])
	leth++;

	for (nex = leth - 1; nex >= 0; nex--)
	_putchar(s[nex]);

	_putchar('\n');

}
