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
		for (x = 'a'; x <= 'z'; x++)
			putchar(x);
	} while (x < 'z');
	putchar('\n');
	return (0);
}
