#include "main.h"

/**
 * check97 - correct numb of arguments
 * @argc: numb of arguments
 * Return: void
 */

void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - file from exists and is readable
 * @chk: check true or false
 * @fil: name of file_from
 * @fd_from: file descriptor of from file
 * @fd_to: file descriptor of to filr
 * Return: void
 */

void check98(ssize_t chk, char *fil, int fd_from, int fd_to)
{
	if (chk == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fil);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check99 - file_to was created and can be written to
 * @chk: check true or false
 * @fil: name of file_to
 * @fd_from: file daescriptor of file from
 * @fd_to: file descriptor of file to
 * Return: void
 */

void check99(ssize_t chk, char *fil, int fd_from, int fd_to)
{
	if (chk == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fil);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check100 - file descriptors were closed properly
 * @chk: true or false
 * @fd: file descriptor
 * Return: void
 */
void check100(int chk, int fd)
{
	if (chk == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy content of file to another
 * @argc: argument count
 * @argv: argumeny vector
 * Return: void
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, clos_to, clos_from;
	ssize_t lr, lw;
	char bf[1024];
	mode_t fil;

	check97(argc);
	fd_from = open(argv[1], O_RDONLY);
	check98((ssize_t)fd_from, argv[1], -1, -1);
	fil = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, fil);
	check99((ssize_t)fd_to, argv[2], fd_from, -1);
	lr = 1024;
	while (lr == 1024)
	{
		lr = read(fd_from, bf, 1024);
		check98(lr, argv[1], fd_from, fd_to);
		lw = write(fd_to, bf, lr);
		if (lw != lr)
			lw = -1;
		check99(lw, argv[2], fd_from, fd_to);
	}
	clos_to = close(fd_to);
	clos_from = close(fd_from);
	check100(clos_to, fd_to);
	check100(clos_from, fd_from);
	return (0);
}
