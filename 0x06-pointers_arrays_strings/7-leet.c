#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */

char *leet(char *s)
{
	int p, q;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (p = 0; *(s + p); p++)
		for (q = 0; q <= 9; q++)
			if (a[q] == s[p])
				s[p] = b[q];
	return (s);
}
