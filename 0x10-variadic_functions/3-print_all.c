#include "variadic_functions.h"

/**
 * p_char - prints a character
 * @a: character to be printed
 */

void p_char(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * p_int - prints a character.
 * @a: character to be printed
 */

void p_int(va_list a)
{
	printf("%i", va_arg(a, int));
}

/**
 * p_float - prints a character.
 * @a: character to be printed
 */

void p_float(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
 * p_string - prints a character.
 * @a: character to be printed
 */

void p_string(va_list a)
{
	char *str = va_arg(a, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	type_t types[] = {
		{'c', p_char},
		{'i', p_int},
		{'f', p_float},
		{'s', p_string},
		{'\0', '\0'}
	};
	va_list alist;
	char *spc = "";
	int i = 0, j = 0;

	va_start(alist, format);
	while (format[i] && format)
	{
		j = 0;
		while (types[j].tp)
		{
			if (format[i] == types[j].tp)
			{
				printf("%s", spc);
				types[j].f(alist);
				spc = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(alist);
}
