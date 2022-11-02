#include "main.h"


/**
 * _puts_recursion - to print a string followed by a new line.
 *
 * @s: string pointer
 *
 * Return: Always 0
 *
 */


void _puts_recursion(char *s)
{

	if (*s == '\0')
	_putchar('\n');

	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);

	}
}
