#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * @...: is the number of parameters to be passed to the function
 * Return: Always 0
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list para;
	unsigned int index;

	if (separator == NULL)
		return;

	va_start(para, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(para, const unsigned int));

		if (index != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(para);

}
