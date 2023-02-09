#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int p, q, r = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for (r = 0; text_content[r];)
			r++;

	p = open(filename, O_WRONLY | O_APPEND);
	q = write(p, text_content, r);

	if (p == -1 || q == -1)
		return (-1);

	close(p);
	return (1);
}
