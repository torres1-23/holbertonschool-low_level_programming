#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line..
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list alist;
	char *str;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	va_start(alist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(alist, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(alist);
}
