#include "main.h"


/**
 * print_diagonal - a function that print a diagonal line.
 *
 * @n: the number of lines.
 *
 * Return: void
 *
 */

void print_diagonal(int n)
{
	int lin;
	int tap;

	if (n > 0)
	{
	for (lin = 0; lin < n; lin++)
	{
	for (tap = 0; tap < lin; tap++)
	_putchar(' ');

	_putchar('\\');

	if (lin == n - 1)
	continue;
	_putchar('\n');
	}

	}

	_putchar('\n');
}
