#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array of integers
  *    using jump search.
  * @array: pointer to the first element of the array to search.
  * @size: is the number of elements in the array.
  * @value: is the value to search for.
  * Return: If value is not present or array is NULL, -1.
  *    Otherwise, first index where the value is located.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t y, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (y = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		y = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", y, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; y < jump && array[y] < value; y++)
		printf("Value checked array[%ld] = [%d]\n", y, array[y]);
	printf("Value checked array[%ld] = [%d]\n", y, array[y]);

	return (array[y] == value ? (int)y : -1);
}
