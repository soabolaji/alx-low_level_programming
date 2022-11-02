#include "main.h"


/**
 * _pow_recursion - to return the value of x raised to the power of y,
 *
 * @x: the integer x,
 * @y: return -1 if y less than 0
 *
 * Return: the value of x.
 */


int _pow_recursion(int x, int y)
{

	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	else

	return (x * _pow_recursion(x, y - 1));
}
