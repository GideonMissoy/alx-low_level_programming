#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int q;

	q = 0;
	if (!b)
		return (0);
	for (p = 0; b[p] != '\0'; p++)
		if (b[p] != '0' && b[p] != '1')
			return (0);
	for (p = 0; b[p] != '\0'; p++)
	{
		q <<= 1;
		if (b[p] == '1')
			q += 1;
	}
	return (q);
}
