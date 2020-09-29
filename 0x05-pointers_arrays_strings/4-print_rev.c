#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to print
 */

void print_rev(char *s)
{
	int i = 0;
	int x;

	while (s[i] != '\0')
		i++;
	for (x = i; x > 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
