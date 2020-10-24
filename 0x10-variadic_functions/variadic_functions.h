#ifndef _VARIADIC_H_
#define _VARIADIC_H_

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type - structure for types.
 * @tp: string type of character.
 * @f: pointer to function that prints.
 */

typedef struct type
{
	char tp;
	void (*f)();
} type_t;

void p_char(va_list a);
void p_int(va_list a);
void p_float(va_list a);
void p_string(va_list a);

#endif /* _VARIADIC_H_ */
