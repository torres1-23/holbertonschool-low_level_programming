#include <stdio.h>

/**
 * main - Entry point, prints the dictionary in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	do {
		for (x = 0; x <= 9; x++)
			putchar(x + 48);
	} while (x < 9);
	putchar('\n');
	return (0);
}
