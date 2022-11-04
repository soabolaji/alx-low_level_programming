#include "main.h"

/**
 * _strstr - to locate a substring
 *
 * @haystack: the string to be fund,
 * @needle: the first occurence of the string
 * Return: a pointer to the begining of the location or Null.
 *
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{

	char *one = haystack;
	char *two = needle;

	while (*one == *two && *two != '\0')
	{
	one++;
	two++;
	}
	if (*two == '\0')
	return (haystack);
	}

	return ('\0');

}
