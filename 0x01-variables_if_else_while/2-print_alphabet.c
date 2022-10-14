#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


/**
 * main - Entry point
 *
 * Description: 'Print alphabet'
 *
 * Return: Always 0 (Success)
 *
 */


	int main(void)
	{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
	putchar(tolower(x)); /*covert to lower case*/

	}

	putchar('\n');
	return (0);
	}
