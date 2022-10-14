#include <stdio.h>
#include <ctype.h>


/**
 * main - Entry point
 *
 * Description: ' Print from 0 to 99'
 *
 * Return: Always 0 (success)
 *
 */


	int main(void)
	{
	int x;
	int z;

	for (x = 0; x <= 98; x++)
	{
	for (z = x + 0; z <= 99; z++)
	{
	putchar((x / 10) + '0');
	putchar((x % 10) + '0');
	putchar(' ');
	putchar((z / 10) + '0');
	putchar((z % 10) + '0');
	
	if (x == 98 && z == 99)
	continue;

	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
	}
