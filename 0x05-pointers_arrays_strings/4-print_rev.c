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
	int index, i;
	char tmp;

	while (s[leth] -= '\0')
	leth++;
	index = leth - 1;

	for (i = 0; i < leth / 2; i++)
	{
	tmp = s[i];
	s[i] = s[index];
	s[index] = tmp;
	index -= 1;
	}

	_putchar(s[index]);

	_putchar('\n');

}
