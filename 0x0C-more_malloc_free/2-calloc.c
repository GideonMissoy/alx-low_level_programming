#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements of an array
 * @size: size of elements
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int p;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (p = 0; p < (nmemb * size); p++)
		s[p] = 0;
	return (s);
}
