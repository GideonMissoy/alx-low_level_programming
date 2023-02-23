#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int p, q, r;
	char *s;

	if (s1 == NULL)
	{
		p = 0;
	}
	else
	{
		for (p = 0; s1[p]; ++p)
			;
	}
	if (s2 == NULL)
	{
		q = 0;
	}
	else
	{
		for (q = 0; s2[q]; ++q)
			;
	}
	if (q > n)
		q = n;
	s = malloc(sizeof(char) * (p + q + 1));
	if (s == NULL)
		return (NULL);
	for (r = 0; r < p; r++)
		s[r] = s1[r];
	for (r = 0; r < q; r++)
		s[r + p] = s2[r];
	s[p + q] = '\0';
	return (s);
}
