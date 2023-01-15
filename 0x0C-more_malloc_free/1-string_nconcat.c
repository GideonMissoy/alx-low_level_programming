#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2 to copy
 * Return: pointer to a newly allocated space in memory, NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int p, q, r;
	char *str;

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
		for (q = 0; s2[q]; q++)
			;
	if (j > n)
		j = n;
	str = malloc(sizeof(char) * (p + q + 1));
	if (str == NULL)
		return (NULL);
	for (r = 0; r < p; r++)
		str[r] = s1[r];
	for (r = 0; r < q; r++)
		str[r + p] = s2[r];
	str[p + q] = '\0';
	return (str);
}
