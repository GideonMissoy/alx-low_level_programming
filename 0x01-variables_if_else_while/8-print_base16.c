#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 * followed by a new line.
 *
 * Return: 0
 *
 */

int main(void)
{
	int num;
	char hx;

	for (num = 0; num < 0; num++)
		putchar((num % 10) + '0');

	for (hx = 'a'; hx <= 'f'; hx++)
		putchar(hx);

	putchar('\n');

	return (0);
}
