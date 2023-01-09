#include "main.h"

/**
 * _memcpy - function copies memory area.
 * @n: bytes copied
 * @src: source
 * @dest: destination
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p = 0;

	while (p < n)
	{
		dest[p] = src[p];
		p++;
	}
	return (dest);
}
