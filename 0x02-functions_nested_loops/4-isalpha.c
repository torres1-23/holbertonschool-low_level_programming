# include "holberton.h"

/**
 * _isalpha - check if char is a letter.
 * @c: char to be checked
 *
 * Description: Check if char is a letter, upper or lowercase and returns value
 *
 * Return: 1 if is a letter, 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 'A' || c >= 'a')
		return (1);
	else
		return (0);
}
