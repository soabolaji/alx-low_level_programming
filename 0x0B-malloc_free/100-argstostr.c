#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * argstostr - to concatenate all the arguments of the program
 * @ac: the argument characters inputs
 * @av: the array of arguments inputed
 * Return: Null if the condition if failed otherwise a pointer...
 */

char *argstostr(int ac, char **av)
{
	int index, strav, argvc = 0, length = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (index = 0; index < ac; index++)
	{
	for (strav = 0; av[index][strav]; strav++)
	length++;
	}
	length += ac;

	str = malloc(sizeof(char) * length + 1);
	if (str == NULL)
	return (NULL);

	for (index = 0; index < ac; index++)
	{
	for (strav = 0; av[index][strav]; strav++)
	{
	str[argvc] = av[index][strav];
	argvc++;
	}
	if (str[argvc] == '\0')
	{
	str[argvc++] = '\n';
	}
	}
	return (str);
}
