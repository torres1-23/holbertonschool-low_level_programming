#include "search_algos.h"

/**
 * exponential_search - searches for a value in an array of integers
 * using the exponential search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: first index where value is located, or -1 on error.
 */

int exponential_search(int *array, size_t size, int value)
{
	unsigned int high = 1, low = 0;

	if (array != NULL)
	{
		while (high < size && array[high] < value)
		{
			printf("Value checked array[%d] = [%d]\n", high, array[high]);
			high *= 2;
		}
		low = high / 2;
		if (high > size - 1)
		{
			printf("Value found between indexes [%d] and [%d]\n", low, high - 1);
			high = size - 1;
		}
		else
			printf("Value found between indexes [%d] and [%d]\n", low, high);
		return (binary_search_exp(array, low, high, value));
	}
	return (-1);
}

/**
 * binary_search_exp - searches for a value in an array of integers
 * using the Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @low: lower index to search.
 * @high: higher index to search.
 * @value: value to search for.
 * Return: index where value is located, or -1 on error.
 */

int binary_search_exp(int *array, int low, int high, int value)
{
	int mid, i;

	if (array != NULL)
	{
		while (low <= high)
		{
			printf("Searching in array: ");
			for (i = low; i < high; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[high]);
			mid = (low + high) / 2;
			if (array[mid] < value)
				low = mid + 1;
			else if (array[mid] > value)
				high = mid - 1;
			else
				return (mid);
		}
	}
	return (-1);
}
