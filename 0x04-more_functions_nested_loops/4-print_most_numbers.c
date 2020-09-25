#include "holberton.h"

/**
 * print_most_numbers - prints the number 0-9 except 2 and 4
 *
 * Description: Prints the numbers 0-9 except 2 and 4 followed by a new line
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
