# include "holberton.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to be checked
 *
 * Description: checks the sign of a number, prints the sign and return a value
 *
 * Return: 1 if n is > 0, 0 if n = 0 and -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
