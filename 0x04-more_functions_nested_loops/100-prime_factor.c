#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int l, n = 612852475143;

	for (l = 3; l < 782849; l = l + 2)
	{
		while ((n % l == 0) && (n != l))
			n = n / l;
	}
	printf("%d\n", n);
	return (0);
}
