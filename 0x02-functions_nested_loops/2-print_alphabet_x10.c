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
	int t = '0';
	char lc;

	while (t < 10; t++)
	{
		lc = 'a';
		while (lc <= 'z'; lc++)
		{
			_putchar(lc);
		}
		_putchar('\n');
	}
}
