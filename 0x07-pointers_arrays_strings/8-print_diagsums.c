#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int p, q, r, s = 0, t = 0;

	for (p = 0; p < size; p++)
	{
		r = (p * size) + p;
		s += *(a + r);
	}
	for (q = 0; q < size; q++)
	{
		r = (q * size) + (size - 1 - q);
		t += *(a + r);
	}
	printf("%d, %d\n", s, t);
}
