#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the initial segment
 * @accept: string
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int p = 0, q, r;

	for (q = 0; s[q] != '\0'; q++)
	{
		if (s[q] != 32)
		{
			for (r = 0; accept[r] != '\0'; r++)
			{
				if (s[q] == accept[r])
					p++;
			}
		}
		else
			return (p);
	}
	return (p);
}
