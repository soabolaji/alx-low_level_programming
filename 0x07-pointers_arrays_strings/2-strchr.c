#include "main.h"



/**
 * _strchr - to locate a character in a string.
 * @c: the character to be located and replace.
 * @s: the string
 *
 * Return: return pointer to the first occurence of the character.
 *
 */


char *_strchr(char *s, char c)
{
	char i;

	for (; *(s + i) >= '\0'; i++)
	{
	if (*(s + i) == c)
	return (s + i);
	}

	return ('\0');

}
