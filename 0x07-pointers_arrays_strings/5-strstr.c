#include "holberton.h"

/**
 * _strstr -  locates a substring.
 * @haystack: string to analyze.
 * @needle: string to compare.
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int cont = 0;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j])
				break;
		}
		for (; i <= j; i++)
		{
			if (haystack[i] == needle[j])
				cont++;
		}
		if (j == cont)
			return (haystack + i);
	}
	return ('\0');
}