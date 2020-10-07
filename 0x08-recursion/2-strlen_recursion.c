#include "holberton.h"

/**
 * _strlen_recursion -  returns the length of a string.
 * @s: string to calcule its size
 *
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i])
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
