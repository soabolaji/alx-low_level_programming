#include <stdio.h>

/**main - Entry point
 *
 *
 * Description: 'C program that prints the size of various types'
 *
 *
 * Return: Always 0 (Success)
 *
 */
	int main(void)
	{
	
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

/* the size of various types */
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of a int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));	
	printf("Size of a float: %zu byte(s)", sizeof(floatType));
	return (0);

	}
	
