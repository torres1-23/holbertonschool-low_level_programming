#include <stdio.h>

/**
 * main - Entry point, prints the number from 00 to 99 separated by a comma
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;
	int a;
	int b;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			for (a = y + 1; a <= 9; a++)
			{
				for (b = a + 1; b <= 9; b++)
				{
					if (x < a)
					{	
						putchar(x + 48);
						putchar(y + 48);
						putchar(32);
					}	
					if (y < b)
					{
						putchar(a + 48);
						putchar(b + 48);
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
