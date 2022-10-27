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

	int num, index, len;

	if (size <= 0)
	printf("\n");
	else
	{
	for (num = 0; num < size; num += 10)
	{
	printf("%.8x:", num);
	for (index = num; index < num + 10; index++)
	{
	if (index % 2 == 0)
	printf(" ");
	if (index < size)
	printf("%.2x", *(b + index));
	else
	printf("  ");
	}
	printf(" ");
	for (len = num; len < num + 10; len++)
	{
	if (len >= size)
	break;
	if (*(b + len) < 32 || *(b + len) > 126)
	printf("%c", '.');
	else
	printf("%c", *(b + len));
	}
	printf("\n");
	}
	}
}
