#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of dimensional array
 * @height: height of dimensional array
 * Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int p, q;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (int **)malloc(height * sizeof(int *));
	if (a == NULL)
		return (0);
	for (p = 0; p < height; p++)
	{
		a[p] = (int *)malloc(width * sizeof(int));
		if (a[p] == NULL)
		{
			for (q = 0; q < p; q++)
				free(a[q]);
			free(a);
			return (0);
		}
		for (q = 0; q < width; q++)
			a[p][q] = 0;
	}
	return (a);
}
