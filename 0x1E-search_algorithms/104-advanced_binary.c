#include "search_algos.h"

/**
  * advanced_binary_recursive_ - Search recursively for a val in a sorted
  *     array of ints using binary search.
  * @array: pointer to the first element of the [sub]array to search.
  * @lft: starting index of the [sub]array to search.
  * @rght: ending index of the [sub]array to search.
  * @value: value to search for.
  *
  * Return: If the value is not present, -1.
  *     Otherwise, the index where the value is located.
  */
int advanced_binary_recursive_(int *array, size_t lft, size_t rght, int value)
{
	size_t y;

	if (rght < lft)
		return (-1);

	printf("Searching in array: ");
	for (y = lft; y < rght; y++)
		printf("%d, ", array[y]);
	printf("%d\n", array[y]);

	y = lft + (rght - lft) / 2;
	if (array[y] == value && (y == lft || array[y - 1] != value))
		return (y);
	if (array[y] >= value)
		return (advanced_binary_recursive_(array, lft, y, value));
	return (advanced_binary_recursive_(array, y + 1, rght, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array of
  *     integers using advanced binary search.
  * @array: pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * Return: If the value is not present or the array is NULL, -1.
  *     Otherwise, the first index where the value is located.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive_(array, 0, size - 1, value));
}
