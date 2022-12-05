#include "main.h"
#include <stdlib.h>


/**
 * read_textfile - function that reads a text file and prints it
 *	to the POSIX standard output.
 * @filename: the name of text file to be read
 * @letters: the number of letters it should read and print
 * Return: Always 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rid, wrt;
	char *fptr;

	if (filename == NULL)
		return (0);

	fptr = malloc(sizeof(char) * letters);
	if (fptr == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rid = read(op, fptr, letters);
	wrt = write(STDOUT_FILENO, fptr, rid);

	if (op == -1 || rid == -1 || wrt == -1 || wrt != rid)
	{
		free(fptr);
		return (0);
	}

	free(fptr);
	close(op);

	return (wrt);
}
