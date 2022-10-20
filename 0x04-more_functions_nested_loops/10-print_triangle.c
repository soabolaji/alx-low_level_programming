#include "main.h"


/**
 * print_triangle - function that print triangle.
 *
 * @size: the size of the triangle.
 *
 * Return: void
 *
 */

void print_triangle(int size)
{
	int tag, len;

	if (size > 0)
	{
	for (tag = 1; tag <= size; tag++)
	{
	for (len = size - tag; len > 0; len--)
	_putchar(' ');

	for (len = 0; len < tag; len++)
	_putchar('#');

	if (tag == size)
	continue;

	_putchar('\n');

	}

	}

	_putchar('\n');

}
