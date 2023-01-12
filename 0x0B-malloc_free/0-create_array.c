#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: number of characters
 * @c: character
 * Return: pointer to the array, NUll if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int q;

	if (size == 0)
		return (NULL);
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (q = 0; q < size; q++)
		p[q] = c;
	return (p);
}
