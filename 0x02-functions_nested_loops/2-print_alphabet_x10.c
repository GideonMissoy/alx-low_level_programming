#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: ALways 0
 *
 */

void print_alphabet_x10(void)
{
	int t;
	char lc;

	for (t = 0; t <= 9; t++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);
		_putchar('\n');
	}
}
