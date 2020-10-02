#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @a: string to encode
 *
 * Return: string encoded.
 */

char *leet(char *a)
{
	int j = 0;
	int i;
	char let[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L', '\0'};
	char sim[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1', '\0'};

	while (a[j] != '\0')
	{
		for (i = 0; let[i] != '\0'; i++)
		{
			if (a[j] == let[i])
			{
				a[j] = sim[i];
				break;
			}
		}
		j++;
	}
	return (a);
}
