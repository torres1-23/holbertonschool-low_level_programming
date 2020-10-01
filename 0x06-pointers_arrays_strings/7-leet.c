#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @a: string to encode
 *
 * Return: string encoded.
 */

char *leet(char *a)
{
	int i = 0, j = 0;
	int x;
	char let[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L', '\0'};
	char sim[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1', '\0'};

	while (let[i] != '\0')
		i++;
	while (a[j] != '\0')
	{
		for (x = 0; x < i; x++)
		{
			if (a[j] == let[x])
			{
				a[j] = sim[x];
			}
		}
		j++;
	}
	return (a);
}
