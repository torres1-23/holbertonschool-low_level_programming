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
	unsigned int x, y, eq;
	unsigned int cont = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			eq = 0;
			if (s[x] == accept[y])
			{
				eq = 1;
				cont++;
				break;
			}
		}
		if (eq == 1)
			continue;
		else
			break;
	}
	return (cont);
}
