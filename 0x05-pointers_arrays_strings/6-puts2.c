#include "main.h"


/**
 * puts2 - function that prints every other character of a string,
 *
 * @str: the string
 *
 */


void puts2(char *str)
{
	int index = 0;
	int lenth = 0;

	while (str[index++])
	lenth++;

	for (index = 0; index < lenth; index += 2)

	_putchar(str[index]);

	_putchar('\n');

}
