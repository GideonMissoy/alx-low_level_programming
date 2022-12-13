#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int r;
	int s;
	int t;

	for (t = '0'; t <= '9'; t++)
	{
		for (s = '0'; s <= '9'; s++)
		{
			for (r = '0'; r <= '9'; r++)
			{
				if (!((r == s) || (s == t) || (s > r) || (t > s)))
				{
					putchar(t);
					putchar(s);
					putchar(r);
					if (!(r == '9' && s == '8' && t == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
