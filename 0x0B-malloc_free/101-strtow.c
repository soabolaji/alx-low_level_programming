#include <stdio.h>
#include <stdlib.h>
#include "main.h"


int word_size(char *str);
int word_num(char *str);
char **strtow(char *str);

/**
 * word_size - Locates the index marking the end..
 * @str: The string to be searched.
 *
 * Return: the end of the initial word pointed to by str.
 */
int word_size(char *str)
{
	int index = 0, length = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
	length++;
	index++;
	}

	return (length);
}

/**
 * word_num - Counts the number of word within a string.
 * @str: The string to be searched.
 *
 * Return: The number word in the str.
 */
int word_num(char *str)
{
	int index = 0, word = 0, length = 0;

	for (index = 0; *(str + index); index++)
	length++;

	for (index = 0; index < length; index++)
	{
	if (*(str + index) != ' ')
	{
	word++;
	index += word_size(str + index);
	}
	}

	return (word);
}

/**
 * strtow - to splits a string into word.
 * @str: the string to be splitted.
 *
 * Return: Null if it fails otherwise a pointer to an array.
 */


char **strtow(char *str)
{
	char **strings;
	int index = 0, word, w, letters, l;

	if (str == NULL || str[0] == '\0')
	return (NULL);

	word = word_num(str);
	if (word == 0)
	return (NULL);

	strings = malloc(sizeof(char *) * (word + 1));
	if (strings == NULL)
	return (NULL);

	for (w = 0; w < word; w++)
	{
	while (str[index] == ' ')
	index++;

	letters = word_size(str + index);

	strings[w] = malloc(sizeof(char) * (letters + 1));

	if (strings[w] == NULL)
	{
	for (; w >= 0; w--)
	free(strings[w]);

	free(strings);
	return (NULL);
	}

	for (l = 0; l < letters; l++)
	strings[w][l] = str[index++];

	strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
