#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array.
 * @array: array to be executed by the function.
 * @size: size of the array.
 * @action: pointer to function that needs to be used.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
