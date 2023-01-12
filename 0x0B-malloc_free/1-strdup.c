#include "main.h"

/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer to the dupliated string, NULL otherwise
 */

char *_strdup(char *str)
{
	unsigned int p, q;
	char *r;

	if (str == NULL)
		return (NULL);
	for (p = 0; str[p]; p++)
		;
	p++;
	r = malloc(p * sizeof(char));
	if (r == NULL)
		return (NULL);
	for (q = 0; q < 1; q++)
		r[q] = str[q];
	return (r);
}
