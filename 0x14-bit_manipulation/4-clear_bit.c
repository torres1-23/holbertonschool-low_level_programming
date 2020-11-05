#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to int.
 * @index: position to change bit from n.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
