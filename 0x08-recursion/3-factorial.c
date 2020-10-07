#include "holberton.h"

/**
 * factorial -  returns the factorial of a given number.
 * @n: number to calculate its factorial.
 *
 * Return: factorial of n.
 */

int factorial(int n)
{
	int fact;

	if (n == 0)
		return (1);
	else if (n >= 0)
		return (fact = n * factorial(n - 1));
	else
		return (-1);
}
