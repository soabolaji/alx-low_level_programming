#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>


/**
 * main - Entry point
 *
 * Descripton: 'Print last digit'
 *
 * Return: Always 0 (success)
 *
 */


	int main(void)
	{
	int n;

/*num to represent the last digit*/
	int num;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;

	if (num > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, num);
	}
	else if (num == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, num);
	}
	else if (num < 6 && num != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	}

	return (0);
	}
