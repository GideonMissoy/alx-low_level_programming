#include "main.h"

/**
 * print_diagonal - function draws a diagonal line on the terminal.
 * @n: number of times
 * Return: 0
 */

void print_diagonal(int n)
{
	int p;
	int q;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 0; p < n; p++)
		{
			for (q = 0; q <= p; q++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
