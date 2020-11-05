#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: one int.
 * @m: another int.
 *
 * Return: number of bits to flip one to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, cont = 0, res;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		res = (n ^ m) >> i;
		if (res & 1)
			cont++;
	}
	return (cont);
}
