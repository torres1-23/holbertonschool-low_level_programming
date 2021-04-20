#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 * using the interpolation search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: first index where value is located, or -1 on error.
 */

int interpolation_search(int *array, size_t size, int value)
{
	unsigned int low = 0, high = size - 1, pos;

	if (array != NULL)
	{
		while (low <= high)
		{
			pos = (low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low])));
			if (pos < size)
			{
				printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
				if (array[pos] < value)
					low = pos + 1;
				else if (array[pos] > value)
					high = pos - 1;
				else
					return (pos);
			}
			else
			{
				printf("Value checked array[%d] is out of range\n", pos);
				break;
			}
		}
	}
	return (-1);
}
