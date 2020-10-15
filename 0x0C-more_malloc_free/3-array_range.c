#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum integer to store.
 * @max: maximum integer to store.
 *
 * Return: NULL if min > max or malloc fails, else, return
 * the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *mem;
	unsigned int size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	mem = malloc(sizeof(int) * size);
	if (mem == NULL)
		return (NULL);
	for (; min < max; min++)
		mem[min] = min;
	return (mem);
}
