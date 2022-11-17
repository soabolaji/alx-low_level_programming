#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print everything.
 * @format: a list of types of arguments passed to the function.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list para;
	unsigned int i = 0, num, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(para, format);
	while (format && format[i])
	{
	num = 0;
	while (t_arg[num])
	{
	if (format[i] == t_arg[num] && c)
	{
	printf(", ");
	break;
	} num++;
	}
	switch (format[i])
	{
	case 'c':
	printf("%c", va_arg(para, int)), c = 1;
	break;
	case 'i':
	printf("%d", va_arg(para, int)), c = 1;
	break;
	case 'f':
	printf("%f", va_arg(para, double)), c = 1;
	break;
	case 's':
	str = va_arg(para, char *), c = 1;
	if (!str)
	{
	printf("(nil)");
	break;
	}
	printf("%s", str);
	break;
	} i++;
	}
	printf("\n"), va_end(para);
}
