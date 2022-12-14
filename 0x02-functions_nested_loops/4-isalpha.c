#include "main.h"

/**
 * _isalpha - function checks for alphabetic character.
 * @c: character
 * Return: 1 if character is a letter, 0 if itsn't
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
