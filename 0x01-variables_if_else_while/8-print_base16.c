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
		for (x = 0x0; x <= 0xf; x++)
			putchar(x + 97);
	} while (x < 0xf);
	putchar('\n');
	return (0);
}
