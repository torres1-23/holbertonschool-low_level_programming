#include "holberton.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int x, a, b, c, y, z;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			a = y * x;
			b = a / 10;
			c = a % 10;
			if (b == 0)
			{
				b = 32;
				z = 0;
			}
			else if (b == 0 && c == 0)
			{
				b = 0;
				z = 0;
			}
			else
				z = 48;
			_putchar(b + z);
			_putchar(c + 48);
			if (x != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
