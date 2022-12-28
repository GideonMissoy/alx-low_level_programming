#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: source
 * @dest: destination
 * @n: length
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int p;
	int q;

	for (p = 0; dest[p] != '\0'; p++)
		continue;
	for (q = 0; src[q] != '\0' && q < n; q++)
		dest[p + q] = src[q];
	dest[p + q] = '\0';
	return (dest);
}
