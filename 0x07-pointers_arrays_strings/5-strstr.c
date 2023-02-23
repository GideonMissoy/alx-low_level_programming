#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int p = 0;
	unsigned int q = 0;

	while (haystack[p])
	{
		while (needle[q] && (haystack[p] == needle[0]))
		{
			if (haystack[p + q] == needle[q])
				q++;
			else
				break;
		}
		if (needle[q])
		{
			p++;
			q = 0;
		}
		else
			return (haystack + p);
	}
	return (0);
}
