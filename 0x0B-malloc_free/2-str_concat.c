#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: newly allocated space in memory, NULL otherwise
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int p, q, v, w;
	char *s;

	if (s1 == NULL)
		p = 0;
	else
	{
		for (p = 0; s1[p]; p++)
			;
	}
	if (s2 == NULL)
		q = 0;
	else
	{
		for (q = 0; s2[q]; q++)
			;
	}
	v = p + q + 1;
	s = malloc(v * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (w = 0; w < p; w++)
		s[w] = s1[w];
	for (w = 0; w < q; w++)
		s[w + p] = s2[w];
	s[p + q] = '\0';
	return (s);
}
