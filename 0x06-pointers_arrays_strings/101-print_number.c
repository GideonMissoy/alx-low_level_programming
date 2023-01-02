#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Number to prints
 * Return: 0
 */

void print_number(int n)
{
	unsigned int p;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	p = n;
	if (p / 10)
		print_number(x / 10);
	_putchar(p % 10 + '0');
}
