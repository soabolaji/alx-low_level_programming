#include "main.h"


/**
 * puts_half - function that prints half of a strin.
 *
 * @str: the string
 *
 */


void puts_half(char *str)
{
	int index = 0;
	int lenth = 0;
	int i;

	while (str[index++])
	lenth++;

	if ((lenth % 2) == 0)
	i = lenth / 2;

	else

	i = (lenth + 1) / 2;

	for (index = i; index < lenth; index++)
	_putchar(str[index]);

	_putchar('\n');

}
