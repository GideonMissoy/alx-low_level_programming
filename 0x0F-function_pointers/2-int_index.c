#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to an array
 * @size: number of elemments in an array
 * @cmp: pointer to the function to be used to compare values
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int p, q;

	if (size > 0 && array && cmp)
	{
		for (p = 0; p < size; p++)
		{
			q = cmp(array[i]);
			if (q)
				break;
		}
		if (p < size)
			return (p);
	}
	return (-1);
}
