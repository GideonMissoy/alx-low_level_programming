#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: first integer
 * @max: last integer
 * Return: pointer to the newly created array, NULL if it fails
 */

int *array_range(int min, int max)
{
	int p, q;
	int *a;

	if (min > max)
		return (NULL);
	q = max - min + 1;
	a = malloc(sizeof(int) * q);
	if (a == NULL)
		return (NULL);
	for (p = 0; p < q; p++; min++)
	{
		a[p] = min;
	}
	return (a);
}
