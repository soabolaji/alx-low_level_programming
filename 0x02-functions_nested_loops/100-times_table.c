#include "main.h"



/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 *
 */


	void print_times_table(int n)
	{
	int num;
	int multiple;
	int result;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar('0');

	for (multiple = 1; multiple <= n; multiple++)
	{
	_putchar(',');
	_putchar(' ');

	result = num * multiple;
	
	if (result <= 99)
	_putchar(' ');

	if (result <= 9)
	_putchar(' ');

	if (result >= 100)
	{
	_putchar((result / 100) + '0');
	_putchar((result / 10) % 10 + '0');
	}
	else if (result <= 99 && result >= 10)
	{
	_putchar((result / 10) + '0');
	}
	_putchar((result % 10) + '0');
	
	}
	_putchar('\n');
	}
	}
	}
