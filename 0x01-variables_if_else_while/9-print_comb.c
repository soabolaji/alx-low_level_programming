#include <stdio.h>
#include <ctype.h>


/**
 * main - Entry point
 *
 * Description: 'Print all single digit'
 *
 * Return: Always 0 (success)
 *
 */


	int main(void)
	{
	int x;

	for (x = 0; x <= 9; x++)
	{
	putchar((x % 10) + '0');

	if (x == 9)
	continue;

	putchar(',');
	putchar(' ');
	}

	putchar('\n');

	return (0);
	}
