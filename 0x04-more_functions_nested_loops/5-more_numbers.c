#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int p;
	int q;

	for (p = 1; p <= 10; p++)
	{
		for (q = 0; q < 15; q++)
		{
			if (q >= 10)
				_putchar('1');
			_putchar(q % 10 + '0');
		}
		_putchar('\n');
	}
}
