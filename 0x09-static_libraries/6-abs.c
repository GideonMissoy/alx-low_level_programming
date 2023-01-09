#include "main.h"
#include <stdio.h>

/**
 * _abs - function computes the absolute value of an integer.
 * @r: integer to be computed
 * Return: absolute value
 */

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (-r);
}
