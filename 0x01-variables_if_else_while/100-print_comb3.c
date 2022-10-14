#include <stdio.h>
#include <ctype.h>


/**
 * main - Entry point
 *
 * Description: 'Combination of two digit'
 *
 * Return: Always 0 (success)
 *
 */


	int main(void)
	{
	int x;
	int z;

	for (x = 0; x < 9; x++)
	{
	for (z = x + 1; z < 10; z++)
	{
	putchar((x % 10) + '0');
	putchar((z % 10) + '0');

	if (x == 8 && z == 9)
	continue;

	putchar(',');
	putchar(' ');
	}

	}

	putchar('\n');

	return (0);
	}
