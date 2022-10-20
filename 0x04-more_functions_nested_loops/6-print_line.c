#include "main.h"


/**
 * print_line - a function that draw a line.
 *
 * @n: number of time the character.
 *
 * Return: void
 *
 */

void print_line(int n)
{
	int lin;

	if (n > 0)
	{
	for (lin = 0; lin < n; lin++)
	_putchar('_');
	}
	_putchar('\n');
}
