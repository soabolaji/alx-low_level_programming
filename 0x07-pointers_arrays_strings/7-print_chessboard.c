#include "main.h"


/**
 * print_chessboard - to print a chessboard.
 *
 * @a: a pointer variable.
 *
 * Return: Alwaya 0
 *
 */

void print_chessboard(char (*a)[8])
{
	int index, n;

	for (index = 0; index < 8; index++)
	{
	for (n = 0; n < 8; n++)
	_putchar(a[index][n]);

	_putchar('\n');
	}

}
