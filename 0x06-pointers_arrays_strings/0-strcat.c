#include "main.h"

/**
 * _strcat - Function concatenates two strings.
 * @dest: first string
 * @src: second string
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
