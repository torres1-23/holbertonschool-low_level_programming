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
 * _isupper - checks for uppercase character
 * @c: Character checked
 *
 * Return: 1 if c is upper, 0 otherwise
 */

int _isupper(int c);

/**
 * _isdigit - checks if a digit is actually a digit
 * @c: The integer to check
 *
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c);

/**
 * mul - Multiplies 2 integers
 * @a: one integer to multiply
 * @b: other integer to multiply
 *
 * Return: an integer containing the result of the multiplication
 */

int mul(int a, int b);

/**
 * print_numbers - Prints the numbers 0-9
 */

void print_numbers(void);

/**
 * print_most_numbers - prints the number 0-9 except 2 and 4
 */

void print_most_numbers(void);

/**
 * more_numbers - prints 10 times the digits 0-14
 */

void more_numbers(void);

/**
 * print_line - prints a horizontal line
 * @n: number of times '-' has to be printed
 */

void print_line(int n);

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character '\' should be printed
 */

void print_diagonal(int n);

/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 */

void print_square(int size);

/**
 * print_triangle - draws a triangle on the terminal
 * @size: size of the triangle
 *
 */

void print_triangle(int size);

/**
 * print_number - print a integer with putchar
 * @n: integer to print
 */

void print_number(int n);

#endif /* _HOLBERTON_H_ */
