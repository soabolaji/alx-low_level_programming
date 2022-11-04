#include <stdio.h>


/**
 * main - entry point
 *
 * @argc: number of arguments supplied
 *
 * @argv: array of arguments supplied
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
	printf("%s\n", argv[arg]);

	return (0);
}
