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
	int z;
	int a;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
				putchar(x + 48);
				putchar(y + 48);
				putchar(z + 48);
				a = 100 * x + y * 10 + z;
				if (a != 789)
				{
					putchar(44);
					putchar(0);
				}
			}
		 }
	}
	putchar(10);
	return (0);
}
