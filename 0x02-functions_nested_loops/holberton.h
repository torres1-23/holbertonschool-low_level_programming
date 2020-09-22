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
 * print_alphabet - print the abc
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - prints the abc ten times
 */

void print_alphabet_x10(void);

/**
 * _islower - checks if char is upper or lower case
 * @c: The char to check
 *
 * Return: 0 if c is lowercase, 1 if it is uppercase
 */

int _islower(int c);

/**
 * _isalpha - checks if a character is an alphabetic character
 * @c: The char to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c);

/**
 * print_sign - prints the sign of a number
 * @n: number to be checked
 *
 * Return: 1 if n is > 0, 0 if n = 0 and -1 if n < 0
 */

int print_sign(int n);

/**
 * _abs - computes the absolute value of an integer
 *@int: number passed
 *
 * Return: absolute value of integer passed
 */

int _abs(int);

/**
 * print_last_digit - prints last digit of number
 *@int: number passed
 *
 * Return: last digit of int
 */

int print_last_digit(int);

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */

void jack_bauer(void);

/**
 * times_table - prints the 9 times table
 */

void times_table(void);

/**
 * print_last_digit - adds 2 integers
 *@int: integer passed
 *@int: integer passed
 *
 * Return: addition of the 2 integers
 */

int add(int, int);

/**
 * print_to_98 - prints all the numbers from the integer to 98
 *@n: integer passed
 */

void print_to_98(int n);

/**
 * print_times_table - prints the n times table
 * @n: number passed
 */

void print_times_table(int n);

#endif /* _HOLBERTON_H_ */
