#include <stdio.h>

/**
 * main - Entry point, prints the number from 00 to 99 separated by a comma
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	do {
		for (x = 0; x <= 99; x++)
		{
			putchar(x / 10 + 48);
			putchar(x % 10 + 48);
			if (x != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	} while (x < 99);
	putchar('\n');
	return (0);
}
