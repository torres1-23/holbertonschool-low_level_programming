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
 * _strcat -  concatenates two strings
 * @dest: string to concatenate to
 * @src: string to concatenate from
 *
 * Return: char string containing tha string appended
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenates two strings
 * @dest: string to concatenate to
 * @src: string to concatenate from
 * @n: bytes to concatenate
 *
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncopy - copies a string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: bytes to copy
 *
 * Return: pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: string to compare
 * @s2: string to compare
 *
 * Return: comparation of strings
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses the content of an array of integers
 * @a: integer to reverse
 * @n: elements of array
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: char to uppercase letters.
 *
 * Return: char in uppercase.
 */

char *string_toupper(char *a);

/**
 * cap_string - capitalizes all words of a string.
 * @a: char to capitalize words
 *
 * Return: char whit capitalizaed words.
 */

char *cap_string(char *a);

/**
 * leet - encodes a string into 1337
 * @a: string to encode
 *
 * Return: string encoded.
 */

char *leet(char *a);

/**
 * rot13 -  encodes a string using rot13
 * @a: string to encode
 *
 * Return: string encoded.
 */

char *rot13(char *a);

/**
 * print_number - print a integer with putchar
 * @n: integer to print
 */

void print_number(int n);

/**
 * infinite_add -  adds two numbers
 * @n1: number to add
 * @n2: number to add
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: .
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * print_buffer -  prints a buffer.
 * @b: string to encode.
 * @size: content of size bytes of the buffer pointed by b
 */

void print_buffer(char *b, int size);

#endif /* _HOLBERTON_H_ */
