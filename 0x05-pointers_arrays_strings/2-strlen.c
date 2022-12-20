#include "main.h"

/**
 * _strlen - function returns the length of a string.
 * @s: string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int index;

	while (*s != '\0')
		index++;
	return (index);
}
