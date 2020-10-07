#include "holberton.h"

/**
 * _puts_recursion -  prints a string, followed by a new line.
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s + i);
	}
	else
		_putchar('\n');
}
