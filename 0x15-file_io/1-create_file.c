#include "main.h"
#include <stdlib.h>


/**
 * create_file - Create a function that creates a file.
 * @filename: the name of the file to be created
 * @text_content: the strings of character in the file
 * Return: 1 on success otherwise -1
 */


int create_file(const char *filename, char *text_content)
{
	int op, wrt, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(op, text_content, length);

	if (op == -1 || wrt == -1)
		return (-1);

	close(op);

	return (1);
}
