#include "main.h"


/**
 * _print_rev_recursion - to print string in reverse orther.
 *
 * @s: string to be printed.
 *
 * Return: Always 0
 *
 */


void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	_print_rev_recursion(s + 1);

	else

	return;

	_putchar(*s);

}
