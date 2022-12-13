#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int m;
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			if (!((m == n) || (n > m)))
			{
				putchar(n);
				putchar(m);
				if (!(m == '9' && n == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
