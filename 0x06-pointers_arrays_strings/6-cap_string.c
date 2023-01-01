#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: 0
 */

char *cap_string(char *s)
{
	int p = 0;
	int q;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + p))
	{
		if (*(s + p) >= 'a' && *(s + p) <= 'z')
		{
			if (p == 0)
			{
				*(s + p) -= 'a' - 'A';
			}
			else
			{
				for (q = 0; q <= 12; q++)
					if (a[q] == *(s + p - 1))
						*(s + p) -= 'a' - 'A';
			}
		}
		p++;
	}
	return (s);
}
