#include "main.h"

/**
 * print_rev - function prints a string, in reverse,
 * followed by a new line
 * @s: string to be printed in reverse
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int index, rev;

	index = 0;
	while ( s[index] != '\0')
		index++;

	for (rev = index - 1; rev >= 0; rev--)
		_putchar(s[rev]);
	_putchar('\n');
}
