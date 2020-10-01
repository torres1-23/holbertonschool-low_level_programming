#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: bytes to copy
 *
 * Return: pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
		i++;
	for (j = 0; j < n; j++)
	{
		if (j < i)
		{
			dest[j] = src[j];
		}
		else
			dest[j] = '\0';
	}
	return (dest);
}
