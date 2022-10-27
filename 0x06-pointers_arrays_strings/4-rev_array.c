#include "main.h"


/**
 * reverse_array - To reverse the content of an array integers.
 *
 * @a: The array integers.
 *
 * @n: The number of elements in the array.
 *
 * Return: The reverse elements.
 *
 */


void reverse_array(int *a, int n)
{
	int rev, index;

	for (index = n - 1; index >= n / 2; index--)
	rev = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = rev;

}
