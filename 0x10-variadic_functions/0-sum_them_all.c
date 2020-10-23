#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters..
 * @n: Parameter to add
 *
 * Return: Sum of all the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list alist;
	unsigned int i, sum = 0;

	va_start(alist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(alist, int);
	va_end(alist);
	return (sum);
}
