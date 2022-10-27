#include "main.h"

/**
 * print_number - print integers.
 *
 * @n: length of integers.
 *
 * Return: int.
 *
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
	_putchar('-');
	num = -num;

	}
	if ((n / 100) > 0)
	print_number(num / 10);

	_putchar((num % 10) + '0');
}
