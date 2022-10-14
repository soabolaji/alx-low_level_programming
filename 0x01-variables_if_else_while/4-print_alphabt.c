#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'Print to skip alphabet'
 *
 * Return: Always 0 (Success)
 *
 */


	int main(void)
	{

	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
	if (x == 'E')
	{
	continue;
	}
	if (x == 'Q')
	{
	continue;
	}
	putchar(tolower(x));
	}
	putchar('\n');
	return (0);
	}
