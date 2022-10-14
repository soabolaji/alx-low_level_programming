#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



/**
 * main - Entry point
 *
 * Description: 'Print upper and lower case letter'
 *
 * Return: Always 0 (success)
 *
 */


	int main(void)
	{
	int x;
	int y;

	for (x = 'A'; x <= 'Z'; x++)
	{	
	putchar(tolower(x));
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
	putchar(y);
	}

	putchar('\n');

	return (0);

	}
