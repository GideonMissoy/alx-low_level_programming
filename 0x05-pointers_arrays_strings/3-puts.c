#include "main.h"

/**
 * _puts - function prints a string
 *  followed by a new line, to stdout.
 * @str: string to be printed
 * Return: Always o
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
		_putchar(str[index]);
	_putchar('\n');
}
