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
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
