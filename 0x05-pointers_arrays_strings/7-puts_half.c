#include "main.h"

/**
 * puts_half - function prints half of a string, followed by a new line.
 * @str: String to be printed
 * Return: 0
 */

void puts_half(char *str)
{
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;

	if (index + 1 % 2 == 1)
		half = (index / 2) + 1;

	else
		half = index / 2;
	half++;

	for (index = half; str[index] != '\0'; index++)
		_putchar(str[index]);
	_putchar('\n');
}
