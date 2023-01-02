#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 * Return: 0
 */

char *rot13(char *s)
{
	int p, q;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (p = 0; *(s + p); p++)
		if (a[q] == *(s + p))
		{
			*(s + p) = b[q];
			break;
		}
	return (s);
}
