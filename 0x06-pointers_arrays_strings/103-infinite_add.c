#include "main.h"


char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);


/**
 * add_strings - Adds the two strings.
 * @n1: The string containing the first number.
 * @n2: The string containing the second number.
 * @r: The buffer to store the result.
 * @r_index: The current index of the buffer.
 *
 * Return: 0 If r can store the sum - a pointer to the result.
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int number, count = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
	number = (*n1 - '0') + (*n2 - '0');
	number += count;
	*(r + r_index) = (number % 10) + '0';
	count = number / 10;

	}

	for (; *n1; n1--, r_index--)
	{
	number = (*n1 - '0') + count;
	*(r + r_index) = (number % 10) + '0';
	count = number / 10;
	}

	for (; *n2; n2--, r_index--)
	{
	number = (*n2 - '0') + count;
	*(r + r_index) = (number % 10) + '0';
	count = number / 10;
	}


	if (count && r_index >= 0)
	{
	*(r + r_index) = (count % 10) + '0';
	return (r + r_index);
	}

	else if (count && r_index < 0)
	return (0);

	return (r + r_index + 1);
}



/**
 * infinite_add - add two numbers
 *
 * @n1: first integer
 * @n2: second integer
 * @r: result buffer
 * @size_r: size of the buffer.
 * Return: Always 0
 *
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_lenth = 0, n2_lenth = 0;

	for (index = 0; *(n1 + index); index++)
	n1_lenth++;

	for (index = 0; *(n2 + index); index++)
	n2_lenth++;
	if (size_r <= n1_lenth + 1 || size_r <= n2_lenth + 1)
	return (0);

	n1 += n1_lenth - 1;
	n2 += n2_lenth - 1;
	*(r + size_r) = '\0';
	return (add_strings(n1, n2, r, --size_r));
}
