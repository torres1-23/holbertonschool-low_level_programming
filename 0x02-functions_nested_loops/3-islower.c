# include "holberton.h"

/**
 * _islower - checks if a char is upper or lowercase
 * @c: char to be checked
 *
 * Description: Gets a char and checks if is upper or lowercase, then returns a
 * value
 *
 * Return: 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a')
		return (1);
	else
		return (0);
}
