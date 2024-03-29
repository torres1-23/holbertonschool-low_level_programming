#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers
 * using the jump search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: first index where value is located, or -1 on error.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = 0, prev = 0, i = 0;

	if (array != NULL)
	{
		while (step < size && array[step] < value)
		{
			prev = step;
			step += sqrt(size);
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
		for (i = prev; i <= step; i++)
		{
			if (i < size)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			else
				break;
		}
	}
	return (-1);
}
