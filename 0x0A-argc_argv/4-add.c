#include <stdio.h>
#include <stdlib.h>


/**
 * main - to add positive numbers
 *
 * @argc: number of arguments
 * @argv: array of supplied arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
	return (0);

	for (i = 1; i < argc; i++)
	{
	if (!atoi(argv[i]))
	{
	printf("%s\n", "Error");
	return (1);
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
