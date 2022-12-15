#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: first number
 * Return: string of numbers
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n--)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
