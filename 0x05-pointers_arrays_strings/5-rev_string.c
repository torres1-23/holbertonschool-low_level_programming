#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	int x;
	char a[1000];

	while (s[i] != '\0')
		i++;
	for (x = i - 1; x >= 0; x--)
	{
		a[j] = s[x];
		j++;
	}
	a[j + 1] = '\0';
	for (x = 0; x <= i - 1; x++)
	{
		s[x] = a[x];
	}
}
