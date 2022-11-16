#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * main - function that perform simple operation
 * @argc: the number of argument to be aupplied
 * @argv: the array of pointer to the argument
 * Return: Always 0
 */


int main(int argc, char *argv[])
{
	int one, two, ans;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	one = atoi(argv[1]);
	two = atoi(argv[3]);
	get_op = argv[2];

	/* added edge case if argv[2] was longer than 1 char*/
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
	printf("Error\n");
	exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
	printf("Error\n");
	exit(100);
	}

	res = get_op_func(get_op);
	ans = res(one, two);

	printf("%d\n", ans);
	return (0);
}
