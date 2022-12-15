#include "main.h"

/**
 * print_last_digit - function prints the last digit of a number.
 * @r: number
 * Return: value of ones
 *
 */

int print_last_digit(int r)
{
	int s = r % 10;

	if (s > 0)
		s *= 1;
	_putchar('0' + s);

	return (0);
}
