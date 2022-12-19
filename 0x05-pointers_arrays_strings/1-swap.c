#include "main.h"

/**
 * swap_int - function swaps the values of two integers.
 * @a: first int to be swapped
 * @b: second int to be swapped
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
