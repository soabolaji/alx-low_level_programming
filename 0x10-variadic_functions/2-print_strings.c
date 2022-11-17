#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - to prints strings, followed by a new line.
 * @separator: string to be printed between strings.
 * @n: number of strings passed to the function.
 * @...: variable number of strings to be printed.
 *
 * Return: If separator is NULL, it is not printe
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(strings, char *);

	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);

	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
