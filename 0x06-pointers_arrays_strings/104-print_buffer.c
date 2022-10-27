#include "main.h"
#include <stdio.h>


/**
 * print_buffer - function that print buffer.
 * @b: content to be printed
 * @size: size of the content in bytes.
 * Return: always 0
 *
 */

void print_buffer(char *b, int size)
{
	int num, index;

	for (num = 0; num < size; num += 10)
	{
	printf("%08x: ", num);

	for (index = 0; index < 10; index++)
	{
	if ((index + num) >= size)
	printf(" ");

	else
	printf("%02x", *(b + index + num));
	if ((index % 2) != 0 && index != 0)
	printf(" ");
	}

	for (index = 0; index < 10; index++)
	{
	if ((index + num) >= size)
	break;

	else if (*(b + index + num) >= 31 && *(b + index + num) <= 126)
	printf("%c", *(b + index + num));

	else
	printf(",");
	}

	if (num >= size)
	continue;

	printf("\n");
	}
	if (size <= 0)
	printf("\n");
}
