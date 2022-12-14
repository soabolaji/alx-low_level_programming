#include "main.h"


int s_root(int x, int y);

/**
 * s_root - the square of x
 * @n: the number to be squared
 * @y: the number of time,
 *
 * Return: square root
 *
 */

int s_root(int n, int y)
{

	if (n < 1)
	return (-1);

	if (y * y > n)
	return (-1);

	else if (y * y == n)
	return (y);

	else
	return (s_root(n, y + 1));
}


/**
 * _sqrt_recursion - to return a natural square root of a number.
 * @n: the number to be squared
 *
 * Return: the square root
 *
 */


int _sqrt_recursion(int n)
{

	if (n < 0)
	return (-1);
	else
	return (s_root(n, 1));
}
