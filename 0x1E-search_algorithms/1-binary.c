#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search alg.
  * @array: pointer to first element of the array to search.
  * @size: number of elements in the array.
  * @value: value to search.
  * Return: If the value is not present or the array is NULL,
  *         your function must return -1
  */
int binary_search(int *array, size_t size, int value)
{
	size_t y, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (y = left; y < right; y++)
			printf("%d, ", array[y]);
		printf("%d\n", array[y]);

		y = left + (right - left) / 2;
		if (array[y] == value)
			return (y);
		if (array[y] > value)
			right = y - 1;
		else
			left = y + 1;
	}

	return (-1);
}
