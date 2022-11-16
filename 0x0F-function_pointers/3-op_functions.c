#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
 * op_add - to return the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - to return the differnt between two integers
 * @a: the first integer
 * @b: the second integer
 * Return: diff between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - to return the product of two integers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - to return the result of division of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the result of div a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - return the remainder of division of two integers
 * @a: first integer
 * @b: second integer
 * Return: the modulus of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
