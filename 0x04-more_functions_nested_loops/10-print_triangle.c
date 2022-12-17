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

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (l = 0; l < size; l++)
		{
			for (h = 0; h < size; h++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
