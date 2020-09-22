#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2, a;

	for (h1 = 0; h1 <= 2; h1++)
	{
		for (h2 = 0; h2 <= 9; h2++)
		{
			for (m1 = 0; m1 <= 5; m1++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					a = h1 * 10 + h2;
					if (a < 24)
					{
						_putchar(h1 + 48);
						_putchar(h2 + 48);
						_putchar(':');
						_putchar(m1 + 48);
						_putchar(m2 + 48);
						_putchar('\n');
					}
					else
						break;
				}
			}
		}
	}
}
