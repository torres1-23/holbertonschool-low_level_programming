#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: Character checked
 *
 * Description: Checks if character is upper or lowercas and returns 1 or 0
 *
 * Return: 1 if c is upper 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
