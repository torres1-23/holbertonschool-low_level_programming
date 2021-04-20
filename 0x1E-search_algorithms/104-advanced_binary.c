#include "search_algos.h"

/**
 * advanced_binary - searches for a value in an array of integers
 * using the Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: first index where value is located, or -1 on error.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array != NULL)
		return (binary_search_rec(array, 0, size - 1, value));
	return (-1);
}

/**
 * binary_search_rec - searches for a value in an array of integers
 * using the Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @low: lower index to search.
 * @high: higher index to search.
 * @value: value to search for.
 * Return: index where value is located, or -1 on error.
 */

int binary_search_rec(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = (high + low) / 2;
		if (array[mid] == value && (mid == 0 || array[mid - 1] != value))
			return (mid);
		if (array[mid] >= value)
			return (binary_search_rec(array, low, mid, value));
		if (array[mid] <= value)
			return (binary_search_rec(array, mid + 1, high, value));
	}
	return (-1);
}
