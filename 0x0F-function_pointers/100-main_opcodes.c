#include <stdio.h>
#include <stdlib.h>


/**
 * main - to print the opcodes of its own main function
 * @argc: the number of argument subplied
 * @argv: the array element of argument
 * Return: Alway 0
 */

int main(int argc, char *argv[])
{
	int n_bytes, index;
	int (*fnumb)(int, char **) = main;
	unsigned char owncode;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}

	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
	printf("Error\n");
	exit(2);
	}

	for (index = 0; index < n_bytes; index++)
	{
	owncode = *(unsigned char *)fnumb;
	printf("%.2x", owncode);

	if (index == n_bytes - 1)
	continue;
	printf(" ");

	fnumb++;
	}

	printf("\n");

	return (0);
}
