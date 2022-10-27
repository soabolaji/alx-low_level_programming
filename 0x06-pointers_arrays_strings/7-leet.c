#include "main.h"


/**
 * leet - encode strings to 1337.
 *
 * @str: the strings
 *
 * Return: str
 *
 */


char *leet(char *str)
{
	int i = 0, j;

	char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
	for (j = 0; j <= 7; j++)
	{
	if (str[i] == leet[j] || str[i] - 32 == leet[j])
	str[i] = j + '0';
	}

	i++;

	}

	return (0);
}
