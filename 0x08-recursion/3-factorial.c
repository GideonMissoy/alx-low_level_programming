#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number
 * Return: factorial
 */

int factorial(int n)
{
	int p;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		p = n * factorial(n - 1);
	}
	return (p);
}
