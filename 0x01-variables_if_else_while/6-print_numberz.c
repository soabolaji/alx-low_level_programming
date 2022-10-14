#include <stdio.h>
#include <ctype.h>


/**
 * main - Entry point
 *
 * Description: 'Print base 10 digits'
 *
 * Return: Always 0 (Success)
 *
 */


	int main(void)
	{
	int z;

	for (z = 0; z < 10; z++)

	putchar((z % 10) + '0');

	putchar('\n');

	return (0);
	}
