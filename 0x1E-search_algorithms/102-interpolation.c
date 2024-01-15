#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array of ints
  *   using interpolation search.
  * @array: pointer to the first element of the array to search.
  * @size: is the number of elements in the array.
  * @value: is the value to search for.
  * Return: If value is not present or array is NULL, -1.
  *   Otherwise, first index where the value is located.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t y, lft, rht;

	if (array == NULL)
		return (-1);
	for (lft = 0, rht = size - 1; rht >= lft;)
	{
		y = lft + (((double)(rht - lft) / (array[rht] - array
					[lft])) * (value - array[lft]));
		if (y < size)
			printf("Value checked array[%ld] = [%d]\n", y, array[y]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", y);
			break;
		}

		if (array[y] == value)
			return (y);
		if (array[y] > value)
			rht = y - 1;
		else
			lft = y + 1;
	}
	return (-1);
}
