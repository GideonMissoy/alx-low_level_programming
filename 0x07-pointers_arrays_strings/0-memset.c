#include "main.h"

/**
 * _memset - function fills memory with a constant byte.
 * @s: pointer
 * @n: bytes of the memory area
 * @b: memory area pointer
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p = 0;

	while (p < n)
	{
		s[p] = b;
		p++;
	}
	return (s);
}
