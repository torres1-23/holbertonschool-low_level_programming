#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: adress of the string array
 *
 * Return: integer containig the length of the string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
