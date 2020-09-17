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

	do {
		for (x = 0; x <= 89; x++)
		{
			y = x / 10;
			z = x % 10;
			if (y != z && z != y && y < z)
			{
				putchar(y + 48);
				putchar(z + 48);
				if (x != 89)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	} while (x < 89);
	putchar('\n');
	return (0);
}
