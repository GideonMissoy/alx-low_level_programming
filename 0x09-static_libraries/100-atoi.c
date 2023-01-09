#include "main.h"

/**
 * _atoi - Function convert a string to an integer.
 * @s: string
 * Return: 0
 */

int _atoi(char *s)
{
	int p = 0;
	unsigned int q = 0;
	int r = 1;
	int t = 0;

	while (s[p])
	{
		if (s[p] == 45)
			r *= -1;
		while (s[p] >= 48 && s[p] <= 57)
		{
			t = 1;
			q = (q * 10) + (s[p] - '0');
			p++;
		}
		if (t == 1)
			break;
		p++;
	}
	q *= r;
	return (q);
}
