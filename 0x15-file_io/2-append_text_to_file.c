#include "main.h"


/**
 * append_text_to_file - function that appends text at
 *	the end of a file.
 * @filename: the file name created
 * @text_content: the text in the file
 * Return: 1 on successful otheewise -1
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int op, wrt, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wrt = write(op, text_content, length);

	if (op == -1 || wrt == -1)
		return (-1);

	close(op);

	return (1);
}
