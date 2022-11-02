#include "main.h"


int s_root(int x, int y);

/**
 * s_root - the square of x
 * @n: the number to be squared
 * @y: the number of time,
 *
 */

int s_root(int n, int y)
{

	if (y < 1)
	return (-1);

	else if (y * y == n)
	return (y);

	else
	return (s_root(n, y - 1));
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
	return (s_root(n, (n + 1) / 2));
}
