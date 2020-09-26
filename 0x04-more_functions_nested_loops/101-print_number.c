#include "holberton.h"

/**
 * print_number - print a integer with putchar
 * @n: integer to print
 */

void print_number(int n)
{
	unsigned int d;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');
	d = n / 10;
	if (d)
		print_number(d);
	_putchar((n % 10) + '0');
}
