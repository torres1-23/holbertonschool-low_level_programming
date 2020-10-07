#include "holberton.h"

/**
 * _print_rev_recursion -  prints a string in reverse.
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_print_rev_recursion(s + (i + 1));
		_putchar(s[i]);
	}
}
