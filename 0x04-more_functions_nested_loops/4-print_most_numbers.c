#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - function prints the numbers, from 0 to 9
 * followed by a new line
 */

void print_most_numbers(void)
{
	int e;

	for (e = '0'; e < 10; e++)
	{
		if ((e == 2) || (e == 4))
		{
			continue;
		}
		_putchar(e);
	}
	_putchar('\n');
}
