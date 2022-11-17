#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * @...: is the number of parameters to be passed to the function
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list para;
	unsigned int index;
	unsigned int anum;

	va_start(para, n);

	for (index = 0; index < n; index++)
	{
	anum = va_arg(para, int);
	printf("%d", anum);

	if (separator && index < n - 1)
	printf("%s", separator);
	}

	printf("\n");

	va_end(para);

}
