#include "holberton.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line
 * @str: String to print
 */

void puts2(char *str)
{
	int i = 0;
	int x;

	while (str[i] != '\0')
		i++;
	for (x = 0; x <= i; x++)
	{
		if (x < i)
		{
			_putchar(str[x]);
			x++;
		}
	}
	_putchar('\n');
}
