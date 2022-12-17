#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int p = n;

	if (n < 0)
	{
		_putchar(45);
		p = -p;
	}
	if (p / 10)
	{
		print_number(p / 10);
	}
	_putchar(p % 10 + '0');
}
