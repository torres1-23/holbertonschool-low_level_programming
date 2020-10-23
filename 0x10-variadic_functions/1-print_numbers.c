#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator.
 * @n: number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list alist;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	va_start(alist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(alist, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(alist);
}
