#include "main.h"

/**
 * print_triangle - function prints a triangle
 * followed by a new line.
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int p, q, spaces;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (p = 1; p <= size; p++)
		{
			for (spaces = size - p; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (q = 1; q <= p; q++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
