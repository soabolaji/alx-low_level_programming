#include <stdio.h>
#include <ctype.h>


/**
 * main - Entry point
 *
 * Description: 'Print hexadecimal'
 *
 * Return: Always 0 (success)
 *
 */


	int main(void)
	{

	int x;
	char z;

	for (x = 0; x < 10; x++)
	putchar((x % 10) + '0');

	for (z = 'a'; z <= 'f'; z++)
	putchar(z);

	putchar('\n');

	return (0);
	}
