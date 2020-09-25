#include "holberton.h"

/**
 * print_triangle - draws a triangle on the terminal
 * @size: size of the triangle
 *
 * Description: Draws a triangle on the terminal
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= size - i)
					_putchar(' ');
				else
					_putchar('#');
				if (j == size)
					_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}
