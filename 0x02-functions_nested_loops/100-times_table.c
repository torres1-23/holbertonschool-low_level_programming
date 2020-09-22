#include "holberton.h"

/**
 * print_times_table - prints the n times table
 * @n: integer passed
 *
 */

void print_times_table(int n)
{
	int x, a, b, c, y, d;

	if (n <= 15 && n >= 0)
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				a = y * x;
				d = a / 100;
				if (a > 99)
					b = (a - 100) / 10;
				else
					b = a / 10;
				c = a % 10;
				if (x == 0)
				{
					_putchar(0 + '0');
				}
				else if (d == 0 && b == 0 && x != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if (d == 0 && b != 0 && x != 0)
				{
					_putchar(' ');
					_putchar(b + '0');
					_putchar(c + '0');
				}
				else
				{
					_putchar(d + '0');
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
