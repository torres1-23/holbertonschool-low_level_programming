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

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line
 * @str: String to print
 */

void puts2(char *str);

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print half of it
 */

void puts_half(char *str);

/**
 * print_array - void print_array(int *a, int n)
 * @a: array to print n numbers for
 * @n: numbers of array to print
 */

void print_array(int *a, int n);

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: array to copy to
 * @src: array to copy from
 *
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src);

/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 *
 * Return: the string converted to int.
 */

int _atoi(char *s);

#endif /* _HOLBERTON_H_ */
