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
 * _puts_recursion -  prints a string, followed by a new line.
 * @s: string to print
 */

void _puts_recursion(char *s);

/**
 * _print_rev_recursion -  prints a string in reverse.
 * @s: string to print
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion -  returns the length of a string.
 * @s: string to calcule its size
 *
 * Return: length of the string.
 */

int _strlen_recursion(char *s);

/**
 * factorial -  returns the factorial of a given number.
 * @n: number to calculate its factorial.
 *
 * Return: factorial of n.
 */

int factorial(int n);

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: number to power.
 * @y: power.
 *
 * Return: if y >= 0 x ^ y, else -1.
 */

int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to get his natural square root.
 *
 * Return: natural square root of n if n has it else -1.
 */
int _sqrt_recursion(int n);

/**
 * _sqrt - calculates the natural square root of a number.
 * @n: number to get his natural square root
 * @i: number to see if it is the sqr root of n.
 *
 * Return: i as square number if exists else -1.
 */

int _sqrt(int n, int i);

/**
 * is_prime_number -  returns if the input integer is a prime number
 * @n: number to analyze.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n);

/**
 * _prime -  calcules if n is prime or not.
 * @n: number to analyze.
 * @d: divisor.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int _prime(int n, int d);

/**
 * _pal - checks if string is palindrome.
 * @s: string to analyze.
 * @l: length of string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int _pal(char *s, int l);

/**
 * _length - calcules the length of the string
 * @s: string to analyze.
 *
 * Return: length of string.
 */

int _length(char *s);

/**
 * is_palindrome - returns if a string is a palindrome
 * @s: string to analyze.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s);

/**
 * wildcmp -  compares two strings
 * @s1: string one to compare.
 * @s2: string two to compare.
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */

int wildcmp(char *s1, char *s2);

#endif /* _HOLBERTON_H_ */
