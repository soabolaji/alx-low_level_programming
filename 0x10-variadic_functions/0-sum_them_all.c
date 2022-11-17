#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: the number of parameter pass tothe function
 * @...: variable number of parameters
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list para;
	unsigned int a, sum = 0;

	if (n == 0)
	return (0);

	va_start(para, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(para, const unsigned int);
	}

	va_end(para);

	return (sum);

}
