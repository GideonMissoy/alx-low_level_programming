#include "search_algos.h"

/**
  * _binary_search_ - Searches for a value in a sorted array in
  *      integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @lft: The starting index of the [sub]array to search.
  * @rght: The ending index of the [sub]array to search.
  * @value: The value to search for.
  * Return: If the value is not present or the array is NULL, -1.
  *      Otherwise, the index where the value is located.
  */
int _binary_search_(int *array, size_t lft, size_t rght, int value)
{
	size_t y;

	if (array == NULL)
		return (-1);

	while (rght >= lft)
	{
		printf("Searching in array: ");
		for (y = lft; y < rght; y++)
			printf("%d, ", array[y]);
		printf("%d\n", array[y]);

		y = lft + (rght - lft) / 2;
		if (array[y] == value)
			return (y);
		if (array[y] > value)
			rght = y - 1;
		else
			lft = y + 1;
	}
	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array of
  *   integers using exponential search.
  * @array: pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * Return: If the value is not present or the array is NULL, -1.
  *   Otherwise, the index where the value is located.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t y = 0, rght;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (y = 1; y < size && array[y] <= value; y = y * 2)
			printf("Value checked array[%ld] = [%d]\n", y, array[y]);
	}

	rght = y < size ? y : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", y / 2, rght);
	return (_binary_search_(array, y / 2, rght, value));
}
