#include "holberton.h"

/**
 * is_palindrome - returns if a string is a palindrome
 * @s: string to analyze.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
        int l;

        l = _length(s);
	if (l > 1)
		return (_pal(s, l - 1));
	else
		return (1);
}

/**
 * _pal - checks if string is palindrome.
 * @s: string to analyze.
 * @l: length of string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int _pal(char *s, int l)
{
	if (s[0] == s[l])
	{
		_pal(s + 1, l - 1);
		return (1);
	}
	else
		return (0);
}

/**
 * _length - calcules the length of the string
 * @s: string to analyze.
 *
 * Return: length of string.
 */

int _length(char *s)
{
	if (s[0])
		return (1 + _length(s + 1));
	else
		return (0);
}
