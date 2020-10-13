#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string one.
 * @s2: string to concatenate from.
 *
 * Return: a pointer to the concatenated string or null on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *cont;
	unsigned int x, y, i = 0, j = 0;

	if (s1 != NULL)
	{
		while (s1[i])
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j])
			j++;
	}
	cont = malloc((sizeof(char) * (i + j)) + 1);
	if (cont == NULL)
		return (NULL);
	for (x = 0; x < i; x++)
		cont[x] = s1[x];
	for (y = 0; y < j; y++)
	{
		cont[x] = s2[y];
		x++;
	}
	cont[x] = '\0';
	return (cont);
}
