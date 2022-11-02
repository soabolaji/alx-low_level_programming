#include "main.h"


int p_number(int n, int i);

/**
 * is_prime_number - to return 1 if the inputed integer is a prime factor.
 *
 * @n: the integer
 *
 * Return: Always 0  if success.
 */


int is_prime_number(int n)
{

	if (n <= 1)
	return (0);

	else if (p_number(n, n / 2) > 0)
	return (1);

	return (0);
}




/**
 * p_number - to check for a prime number.
 *
 * @i: inputed number
 * @n: the integer
 *
 * Return: the outcome
 *
 */

int p_number(int n, int i)
{

	if (i == 1)
	return (1);

	if (n % i ==  0)
	return (0);

	else
	return (p_number(n, i - 1));
}
