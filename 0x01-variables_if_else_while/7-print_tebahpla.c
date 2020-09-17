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
		for (x = 'z'; x >= 'a'; x--)
			putchar(x);
	} while (x > 'a');
	putchar('\n');
	return (0);
}
