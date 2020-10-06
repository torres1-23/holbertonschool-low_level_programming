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
	int i, k;
	int cont = 0, j = 0;
	while (needle[j])
		j++;
	for (i = 0; haystack[i]; i++)
	{
		for (k = 0; k <= j; k++)
		{
			if (haystack[i] == needle[k])
				break;
		}
		for (; i <= j; i++)
		{
			if (haystack[i] == needle[k])
			{
				cont++;
				k++;
			}
		}
		if (k == cont)
			return (haystack + i);
	}
	return ('\0');
}
