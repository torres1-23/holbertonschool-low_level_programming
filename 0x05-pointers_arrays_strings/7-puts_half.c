#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print half of it
 */

void puts_half(char *str)
{
	int i = 0;
	int x;

	while (str[i] != '\0')
		i++;
	if (i % 2 != 0)
	{
		for (x = (i - 1) / 2; x < i; x++)
			_putchar(str[x + 1]);
	}
	else
		for (x =  i / 2; x < i; x++)
			_putchar(str[x - 1]);
	_putchar('\n');
}
