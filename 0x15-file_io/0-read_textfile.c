#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX output
 * @filename: pntr to file name
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lenr, lenw;
	int p;
	char *buffer;

	if (filename == NULL)
		return (0);
	p = open(filename, O_RDONLY);
	if (p == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(p);
		return (0);
	}
	lenr = read(p, buffer, letters);
	close(p);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
