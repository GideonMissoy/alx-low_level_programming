#include "main.h"

/**
 * create_file - create a file with read/write access for user
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int p, q, r;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for (r = 0; text_content[r];)
			r++;

	p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	q = write(p, text_content, r);

	if (p == -1 || q == -1)
		return (-1);
	close(p);
	return (1);
}
