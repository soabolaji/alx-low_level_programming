#include "main.h"
#include <stdio.h>


/**
 * print_array - Print array.
 *
 * @a: a pointer variable
 *
 * @n: an integer of array.
 *
 */

void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
	printf("%d", a[num]);

	if (num == n - 1)
	continue;

	printf(",");
	}

	printf("\n");

}
