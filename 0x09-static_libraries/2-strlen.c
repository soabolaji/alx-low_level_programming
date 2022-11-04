#include "main.h"


/**
 * _strlen - function that returns the length of a string.
 *
 * @s: the integer.
 *
 * Return: stgLen.
 *
 */


int _strlen(char *s)
{
	int stgLen = 0;

	while (*s++)
	stgLen++;

	return (stgLen);
}
