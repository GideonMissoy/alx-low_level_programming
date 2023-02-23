#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @s: string
 * Return: 0
 */

char *string_toupper(char *s)
{
	int p;

	p = 0;
	while (*(s + p))
	{
		if (*(s + p) >= 'a' && *(s + p) <= 'z')
			*(s + p) -= 'a' - 'A';
		p++;
	}
	return (s);
}
