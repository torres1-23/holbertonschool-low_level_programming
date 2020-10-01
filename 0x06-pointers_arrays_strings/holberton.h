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

#include "holberton.h"

/**
 * strncat - concatenates two strings
 * @dest: string to concatenate to
 * @src: string to concatenate from
 * @n: bytes to concatenate
 *
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n);

#endif /* _HOLBERTON_H_ */
