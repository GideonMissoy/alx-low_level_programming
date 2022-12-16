#include "main.h"

/**
 * print_square - prints prints a square, followed by a new line.
 * @size: parameter
 * Return: 0
 */

void print_square(int size)
{
	int r;
	int s;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (r = 0; r < size; r++)
		{
			for (s = 0; s < size; s++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
