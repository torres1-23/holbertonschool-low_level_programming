#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i = 0;
	int x;
	
	while (s[i] != '\0')
		i++;
	for (x = i - 1; x <= 0; x++)
	{
		s[x] = s[(i - 1) + x];
	}
}
