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

#endif /* _HOLBERTON_H_ */
