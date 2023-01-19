#include "function_pointers.h"

/**
 * array_iterator - executes a fxn given as a param on each element of an array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to a function to be executed
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
