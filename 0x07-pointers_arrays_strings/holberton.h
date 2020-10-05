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

/**
 * _strspn -  gets the length of a prefix substring
 * @s: string to compare
 * @accept: bytes to get
 *
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: string to analyze
 * @accept: string to compare from
 *
 * Return: a pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr -  locates a substring.
 * @haystack: string to analyze.
 * @needle: string to compare.
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */

char *_strstr(char *haystack, char *needle);

#endif /* _HOLBERTON_H_ */
