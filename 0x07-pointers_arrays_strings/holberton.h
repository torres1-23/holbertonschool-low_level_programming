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
 * _memset -  fills memory with a constant byte
 * @s: array where the data is stored
 * @b: byte to print
 * @n: n bytes that has to be printed
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy -  copies memory area
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr -  locates a character in a string
 * @s: memory area to copy to
 * @c: memory area to copy from
 *
 * Return: a pointer to the first occurrence of the character c in the
 * string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c);

#endif /* _HOLBERTON_H_ */
