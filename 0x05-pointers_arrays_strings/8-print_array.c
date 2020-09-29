#include <stdio.h>
#include "holberton.h"

/**
 * print_array - void print_array(int *a, int n)
 * @a: array to print n numbers for
 * @n: numbers of array to print
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		printf("%d", a[x - 1]);
		if (x != n)
		{
			printf(", ");
		}
		else
			printf("\n");
	}
}