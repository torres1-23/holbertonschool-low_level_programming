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
			printf("%d", x);
	} while (x < 9);
	printf("\n");
	return (0);
}
