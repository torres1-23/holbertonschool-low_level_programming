#include "holberton.h"

/**
 * print_number - print a integer with putchar
 * @n: integer to print
 */

void print_number(int n)
{
	unsigned int d;

	if (n < 0 && n != 2147483648)
	{
		_putchar('-');
		n = -n;
	}
	if (n == -2147483648)
	{	
		_putchar('-');
		_putchar((n / 1000000000) + '0');
		_putchar((n / 100000000) + '0');
		_putchar((n / 10000000) + '0');
		_putchar((n / 1000000) + '0');
		_putchar((n / 100000) + '0');
		_putchar((n / 10000) + '0');
		_putchar((n / 1000) + '0');
		_putchar((n / 100) + '0');
		_putchar((n % 10) + '0');
	}
	d = n / 10;
	if (d)
		print_number(d);
	_putchar((n % 10) + '0');
}
