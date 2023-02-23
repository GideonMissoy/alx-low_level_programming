#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: source
 * @dest: destination
 * @n: length
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p;

	for (p = 0; p < n && *(src + p); p++)
		*(dest + p) = *(src + p);
	for (; p < n; p++)
		*(dest + p) = '\0';
	return (dest);
}
