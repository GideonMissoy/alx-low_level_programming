#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be checked.
 * @accept: string to be used
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
				return (s);
		}
		s++;
	}
	return (0);
}
