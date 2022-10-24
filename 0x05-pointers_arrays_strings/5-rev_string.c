#include "main.h"


/**
 * rev_string - function that reverses a string.
 * @s: the string.
 *
 */


void rev_string(char *s)
{
	int lenth = 0;
	int index = 0;
	char tmp;

	while (s[index++])
	lenth++;

	for (index = lenth - 1; index >= lenth / 2; index--)
	{
	tmp = s[index];
	s[index] = s[lenth - index - 1];
	s[lenth - index - 1] = tmp;
	}
}
