#include "main.h"

/**
 * _strlen - counts string
 * @s: string
 * Return: 1
 */

int _strlen(char *s)
{
	unsigned int p;

	p = 0;
	while (s[p] != '\0')
		p++;
	return (p);
}

/**
 * _strcpy - copies string
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int p = 0;

	while (src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	dest[p] = '\0';
	return (dest);
}

/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer to the dupliated string, NULL otherwise
 */

char *_strdup(char *str)
{
	unsigned int p;
	char *r;

	if (str == NULL)
	{
		return (NULL);
	}
	p = _strlen(str) + 1;
	r = (char *)malloc(p * sizeof(char));
	if (r == NULL)
	{
		return (NULL);
	}
	_strcpy(r, str);
	return (r);
}
