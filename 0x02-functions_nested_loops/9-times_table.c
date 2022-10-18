#include "main.h"


/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 */


	void times_table(void)
	{
	int num;
	int multiple;
	int result;

	for (num = 0; num <= 9; num++)
	{
	_putchar('0');
	for (multiple = 0; multiple <= 9; multiple++)
	{
	_putchar(',');
	_putchat(' ');

	result = num * multiple;
	if (result <= 9)
	_putchar(' ');

	else

	_putchar((result / 10) + '0');
	_putchar((result % 10) + '0');
	}
	_putchar('\n');
	}
	}

