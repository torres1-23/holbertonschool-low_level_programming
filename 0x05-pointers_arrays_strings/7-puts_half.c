#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print half of it
 */

void puts_half(char *str)
{
	int i = 0;
	int x, n;

	while (str[i] != '\0')
		i++;
	if (i % 2 != 0)
		n = (i - 1) / 2
	else
		n = i / 2;
	for (x =  i - n; x < i; x++)
			_putchar(str[x]);
	_putchar('\n');
}
