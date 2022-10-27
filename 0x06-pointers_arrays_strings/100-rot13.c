#include "main.h"


/**
 * rot13 - Encodes of strings using rot13.
 *
 * @str: the strings
 *
 * Return: str.
 *
 */


char *rot13(char *str)
{
	int i = 0;
	int j;
	char alphabet[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyz";

	while (str[i])
	{
	for (j = 0; j < 52; j++)
	{
	if (str[i] == alphabet[j])
	{
	str[i] = rot13[j];
	break;
	}
	}

	i++;

	}

	return (str);

}
