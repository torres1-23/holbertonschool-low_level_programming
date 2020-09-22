# include "holberton.h"

/**
 * print_last_digit - prints last digit of number
 *@n: number passed
 *
 * Description: takes a number and calcules its last digit and returns it
 *
 * Return: last digit of int
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = _abs(n);
	}
	a = n % 10;
	_putchar(a + 48);
	return (a);
}
