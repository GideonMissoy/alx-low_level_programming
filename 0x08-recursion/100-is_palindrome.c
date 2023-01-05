#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string.
 * @s: string to print
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pal_checker - check if s is palindrome
 * @s: string base address
 * @i: left index
 * @j: rigth index
 * Return: 1 if palindrome, 0 otherwise
 */

int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
		{
			return (1);
		}
		else
			return (pal_checker(s, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - checks if s is palindrome
 * @s: string
 * Return: 1 if palindrome, 0 otherwise
 */

nt is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
