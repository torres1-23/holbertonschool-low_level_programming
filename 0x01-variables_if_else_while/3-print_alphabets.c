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
		for (x = 'a'; x <= 'z'; x++)
			putchar(x);
	} while (x < 'z');
	do {
		for (x = 'A'; x <= 'Z'; x++)
			putchar(x);
	} while (x < 'Z');
	putchar('\n');
	return (0);
}
