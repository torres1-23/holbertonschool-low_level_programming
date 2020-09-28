#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: char
 */

int _putchar(char c);

/**
 * reset_to_98 -  takes a pointer to an int as parameter and updates the value
 * it points to 98
 * @n: Pointer taken
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers
 * @a: first integer to swap
 * @b: second integer to swap
 */

void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string
 * @s: adress of the string array
 *
 * Return: integer containig the length of the string.
 */

int _strlen(char *s);

/**
 * _puts -  prints a string, followed by a new line, to stdout
 * @str: adress of the array of chars
 */

void _puts(char *str);

#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to print
 */

void print_rev(char *s);

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s);

#endif /* _HOLBERTON_H_ */
