#include "main.h"

int char_len(char *s);
int palin_drome(char str[], int st, int end);


/**
 * is_palindrome - to return 1 if a string is palindrome and 0 if not.
 *
 * @s: the string to be inputed.
 *
 * Return: Always 0
 *
 */

int is_palindrome(char *s)
{
	int size = char_len(s);

	if (size == 0)
	return (1);

	return (palin_drome(s, 0, size - 1));


/**
 * char_len - to the length size
 * @s: the inputed string
 *
 * Return: the length size
 */

int char_len(char *s)
{
	if (*s != '\0')
	return (1 + char_len(s + 1));

	return (0);
}


/**
 * palin_drome - check for matches
 * @str: string
 * @st: begining of the string
 * @end: end of the string
 *
 * Return: palindrome if success.
 */


int palin_drome(char str[], int st, int end)
{
	if (st >= end)
	return (1);

	if (str[st] != str[end])
	return (0);

	if (st <= end || st < end + 1)
	{
	return (palin_drome(str, st + 1, end - 1));
	}

	return (1);
}
