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
	if (n > 0)
	{
		n = n % 10;
		_putchar(n + '0');
	}
	else
	{
		n = (n * -1) % 10;
		_putchar(n + '0');
	}
	return (n);
}
