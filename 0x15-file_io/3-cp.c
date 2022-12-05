#include "main.h"
#include <stdlib.h>
#include <stdio.h>



char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *fptr;

	fptr = malloc(sizeof(char) * 1024);

	if (fptr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (fptr);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *		If file_from does not exist or cannot be read - exit code 98.
 *		If file_to cannot be created or written to - exit code 99.
 *		If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int ffile, tfile, rid, wrt;
	char *fptr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fptr = create_buffer(argv[2]);
	ffile = open(argv[1], O_RDONLY);
	rid = read(ffile, fptr, 1024);
	tfile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (ffile == -1 || rid == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(fptr);
			exit(98);
		}

		wrt = write(tfile, fptr, rid);
		if (tfile == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(fptr);
			exit(99);
		}

		rid = read(ffile, fptr, 1024);
		tfile = open(argv[2], O_WRONLY | O_APPEND);

	} while (rid > 0);

	free(fptr);
	close_file(ffile);
	close_file(tfile);

	return (0);
}
