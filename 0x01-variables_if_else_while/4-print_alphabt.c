#include <stdio.h>

/**
 * main - Entry point, prints the dictionary without q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	do {
		for (x = 'a'; x <= 'z'; x++)
		{
			if (x == 'q' || x == 'e')
				continue;
			else
				putchar(x);
		}
	} while (x < 'z');
	putchar('\n');
	return (0);
}
