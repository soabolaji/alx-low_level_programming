#include "main.h"



/**
 * _puts - Print string to the standard output.
 *
 * @str: pointer variable to the string.
 *
 */

void _puts(char *str)
{
	while (*str)

	_putchar(*str++);

	_putchar('\n');
}
