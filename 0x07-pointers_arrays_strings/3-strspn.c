#include "holberton.h"

/**
 * _strspn -  gets the length of a prefix substring
 * @s: string to compare
 * @accept: bytes to get
 *
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;
	unsigned int i = 0, j = 0, cont = 0;

	while (s[i] != '\0')
		i++;
	while (accept[j] != '\0')
		j++;
	for (x = 0; x < i; x++)
	{
		for (y = 0; y < j; y++)
		{
			if (s[x] == accept[y])
			{
				cont++;
				break;
			}
		}
	}
	return (cont);
}
