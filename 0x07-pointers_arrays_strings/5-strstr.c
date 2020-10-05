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
	int i, j, p = 0;
	char word[1000];

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && haystack[i + j] == needle[j]; j++)
		{
			word[p] = haystack[i];
			p++;
		}
		if (j > 0)
		{
			word[p] = '\0';
			for (p = 0; word[p]; p++)
				;
			if (p == j)
				return (haystack + i);
		}
	}
	return ('\0');
}
