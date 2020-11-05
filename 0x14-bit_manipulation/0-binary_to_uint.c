#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int..
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if here is one or more chars in the
 * string b that is not 0 or 1, b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i = 0, len = 0;

	if (b == '\0')
		return (0);
	while (b[len])
	{
		if (b[len] < '0' || b[len] > '1')
			return (0);
		len++;
	}
	dec += b[i] - '0';
	for (i = 1; i < len; i++)
	{
		dec = (dec * 2) + (b[i] - '0');
	}
	return (dec);
}
