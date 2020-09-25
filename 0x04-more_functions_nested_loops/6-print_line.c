#include "holberton.h"

/**
 * print_line - prints a horizontal line
 * @n: number of times '-' has to be printed
 *
 * Description: Takes an integer that represents the number of times the
 * character '-' hast to be printed, if n <0 print a newline
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
