#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct _type - structure for types.
 * @tp: string type of character.
 * @f: pointer to function that prints.
 */

typedef struct types
{
	char tp;
	void (*f)();
} type_t;

#endif /* _VARIADIC_FUNCTIONS_H_ */
