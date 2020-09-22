# include "holberton.h"

/**
 * print_alphabet_x10 - prints the abc ten times
 *
 * Description: Calls _putchar for a nested loop to print the abc 10 times
 */

void print_alphabet_x10(void)
{
	int x;
	int j;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
