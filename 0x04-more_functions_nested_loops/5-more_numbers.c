#include "holberton.h"

/**
 * more_numbers - prints 10 times the digits 0-14
 *
 * Description: Prints the digits 0-14 followed by a new line, and then repeats
 * it 10 times
 */

void more_numbers(void)
{
	int i, j, u, d;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			u = j % 10;
			if (j <= 14 && j >= 10)
			{
				d = j / 10;
				_putchar(d + '0');
			}
			_putchar(u + '0');
		}
		_putchar('\n');
	}
}
