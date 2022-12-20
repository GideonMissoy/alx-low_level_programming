#include "main.h"

/**
 * rev_string - Function reverses a string.
 * @s: string to be reversed
 * Return: reversed string
 */

void rev_string(char *s)
{
	int p, q, r;
	char swp;

	p = 0;
	while (s[p] != '\0')
		p++;

	q = 0;
	r = p - 1;
	while (q < r)
	{
		swp = s[q];
		s[q] = s[r];
		s[r] = swp;
		q++;
		r--;
	}
}
