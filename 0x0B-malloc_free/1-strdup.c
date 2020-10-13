#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate.
 *
 * Return: a pointer to the duplicated string. It returns NULL if insufficient
 * memory was available.
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i;

	copy = malloc(sizeof(char) * (sizeof(str) + 1));
	if (copy == NULL || str == NULL || str[0] == '\0')
		return (NULL);
	else
	{
		for (i = 0; str[i]; i++)
			copy[i] = str[i];
		copy[i] = '\0';
		return (copy);
	}
	return (NULL);
}
