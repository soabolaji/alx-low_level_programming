#include "main.h"


/**
 * factorial - to return the factorial of a given number.
 *
 * @n: the unknown number,
 *
 * Return: factorial,
 *
 */


int factorial(int n)
{
	int facto;

	facto = n * (n - 1);

	if (n < 0)
	return (-1);

	else if (n == 0)
	return (1);

	return (facto);

}
