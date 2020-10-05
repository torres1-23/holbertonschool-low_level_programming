#include "holberton.h"

/**
 * _strchr -  locates a character in a string
 * @s: memory area to copy to
 * @c: memory area to copy from
 *
 * Return: a pointer to the first occurrence of the character c in the string
 * s,or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int x;
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (x = 0; x < i; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return ('\0');
}
