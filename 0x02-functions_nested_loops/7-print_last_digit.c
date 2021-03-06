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
	int a = n % 10;

	if (a > 0)
	{
		_putchar(a + '0');
	}
	else
	{
		a = a * -1;
		_putchar(a + '0');
	}
	return (a);
}
