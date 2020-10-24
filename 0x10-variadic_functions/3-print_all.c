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
	char *str;

	str = va_arg(a, char *);
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
	va_list alist;
	_type_t _types[] = {
		{'c', p_char},
		{'i', p_int},
		{'f', p_float},
		{'s', p_string},
		{'\0', '\0'}
	};
	unsigned int i = 0, j = 0;
	char *spc = "";

	va_start(alist, format);
	while (format[i] != '\0' && format != NULL)
	{
		while (_types[j].tp !0 '\0')
		{
			if (format[i] == _types[j].tp)
			{
				printf("%s", spc);
				_types[j].f(alist);
				spc = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(alist);
}
