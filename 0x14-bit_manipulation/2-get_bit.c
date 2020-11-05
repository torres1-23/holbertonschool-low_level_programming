#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to fin index in.
 * @index: position to retrieve bit from n.
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index < sizeof(n) * 8)
	{
		for (i = 0; i < index; i++)
		{
			n = n >> 1;
		}
		if (n & 1)
			return (1);
		else
			return (0);
	}
	return (-1);
}
