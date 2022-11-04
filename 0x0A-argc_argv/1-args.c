#include <stdio.h>

/**
 * main - to print the number of arguments pass to it.
 *
 * @argc: the number of argument
 * @argv: the array of pointer arg.
 *
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
