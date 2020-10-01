#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to concatenate to
 * @src: string to concatenate from
 * @n: bytes to concatenate
 *
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, p = 0;

	while (dest[i] != '\0')
		i++;
	while (src[p] != '\0')
		p++;
	for (j = 0; j < n; j++)
	{
		if (j < p)
		{
			dest[i] = src[j];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
