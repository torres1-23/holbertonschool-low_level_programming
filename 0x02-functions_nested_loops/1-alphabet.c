#include "holberton.h"

/**
 * print_alphabet - prints the abc
 *
 * Description: Prints the abc usin _putchar
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
