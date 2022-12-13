#include <stdio.h>

/**
 * main - Prints the alphabet in reverse followed by a new line
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char re;

	for (re = 'z'; re >= 'a'; re--)
		putchar(re);
	putchar('\n');

	return (0);
}
