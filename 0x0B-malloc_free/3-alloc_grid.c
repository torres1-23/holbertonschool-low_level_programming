#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: NULL on failure or if width or height is < 0, else, the pointer to
 * the 2 dimensional array.
 */

int **alloc_grid(int width, int height)
{
	int i, j, x;
	int **mat;

	if (width <= 0 || height <= 0)
		return (NULL);
	mat = malloc(sizeof(int *) * height);
	if (mat == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		mat[i] = malloc(sizeof(int) * width);
		if (mat[i] == NULL)
		{
			for (x = 0; x < i; x++)
				free(mat[x]);
			free(mat);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			mat[i][j] = 0;
	}
	return (mat);
}
