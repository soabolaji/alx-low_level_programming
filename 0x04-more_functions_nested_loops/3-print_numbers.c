#include "main.h"


/**
 * print_numbers - function that prints the numbers, from 0 to 9.
 *
 * Return: void
 *
 */

void print_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)

	_putchar((digit % 10) + '0');

	_putchar('\n');
}

