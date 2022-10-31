#include <stdio.h>
#include "main.h"


/**
 * print_diagsums - to priny the sum of two diagonals of a square matrix.
 *
 * @a: pointer integer
 *
 * @size: the size of the square diagonals.
 *
 * Return: Always 0
 *
 */

void print_diagsums(int *a, int size)
{
	int index, num;
	int sum1 = 0, sum2 = 0;

	for (index = 0; index <= (size * size); index = index + size + 1)

	sum1 = sum1 + a[index];

	for (num = size - 1; num <= (size * size) - size; num = num + size - 1)

	sum2 = sum2 + a[num];

	printf("%d, %d\n", sum1, sum2);
}
