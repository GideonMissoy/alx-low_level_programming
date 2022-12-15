#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function prints the numbers, from 0 to 9,
 * followed by a new line
 * Return: Always 0
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
