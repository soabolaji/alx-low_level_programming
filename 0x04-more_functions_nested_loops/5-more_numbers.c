#include "main.h"


/**
 * more_numbers - print 10 times numbers from 0 to 14.
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	int num;
	int num1;

	for (num = 0; num <= 9; num++)
	{
	for (num1 = 0; num1 <= 14; num1++)
	{
	if (num1 > 9)

	_putchar((num1 % 10) / '0');

	_putchar((num1 % 10) + '0');
	}

	_putchar('\n');
	}
}
