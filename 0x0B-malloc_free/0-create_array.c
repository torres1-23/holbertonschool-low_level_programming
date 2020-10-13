#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of char.
 * @c: string to print.
 *
 * Return: a pointer to the array, or NULL if it fails or size = 0.
 */

char *create_array(unsigned int size, char c)
{
	char *res;
	unsigned int i;

	res = malloc(sizeof(char) * size);
	if (size == 0 || res == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			res[i] = c;
		return (res);
	}
	return (NULL);
}
