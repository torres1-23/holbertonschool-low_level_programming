# include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 *@a: number passed
 *
 * Description: gets the absolute value of an integer and returns it
 *
 * Return: absolute value of integer passed
 */

int _abs(int a)
{
	int n;

	if (a < 0)
		n = -1 * a;
	else
		n = a;
	return (n);
}
