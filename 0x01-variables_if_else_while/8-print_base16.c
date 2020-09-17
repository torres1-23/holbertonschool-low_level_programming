#include <stdio.h>

/**
 * main - Entry point, prints the dictionary in lowercase then in uppercase
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
	do {
		for (x = 0x0; x <= 0xF; x++)
			putchar(x + 48);
	} while (x < 0xf);
	putchar('\n');
	return (0);
}
