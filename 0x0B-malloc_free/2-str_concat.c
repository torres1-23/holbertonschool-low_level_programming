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
	unsigned int i, j;

	cont = malloc(sizeof(cont) * (sizeof(s1) + sizeof(s2)));
	if (cont != NULL)
	{
		for (i = 0; s1[i]; i++)
			cont[i] = s1[i];
		for (j = 0; s2[j]; j++)
		{
			cont[i] = s2[j];
			i++;
		}
		cont[i] = '\0';
	}
	else
		return (NULL);
	return (cont);
}
