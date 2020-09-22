#include "holberton.h"

/**
 * print_times_table - prints the n times table
 * @n: integer passed
 *
 */

void print_times_table(int n)
{
	int x, a, b, c, y;

	if (n < 15 && n > 0)
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				a = y * x;
				b = a / 10;
				c = a % 10;
				if (x == 0)
				{
					_putchar(0 + '0');
				}
				else if (b == 0 && x != 0)
				{
					_putchar(' ');
					_putchar(c + '0');
				}
				else
				{
					_putchar(b + '0');
					_putchar(c + '0');
				}
				if (x != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
		}
	}
}
