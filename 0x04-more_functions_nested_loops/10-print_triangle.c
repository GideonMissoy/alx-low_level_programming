#include "main.h"

/**
 * print_triangle - function prints a triangle
 * followed by a new line.
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int l;
	int h;
	int s;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (s = size; s >= l; s--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= l; h++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
