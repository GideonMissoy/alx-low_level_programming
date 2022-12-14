#include "main.h"
#include <unistd.h>

/**
 * main - _putchar writes the character c to stdout
 *
 * Return: on success 1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
