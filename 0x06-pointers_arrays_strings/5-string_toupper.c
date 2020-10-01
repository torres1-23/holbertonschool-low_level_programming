#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: char to uppercase letters.
 *
 * Return: char in uppercase.
 */

char *string_toupper(char *a)
{
	int i = 0;
	int t, x;

	while (a[i] != '\0')
		i++;
	for (x = 0; x < i; x++)
	{
		if (a[x] >= 'a' && a[x] <= 'z')
		{
			t = a[x];
			a[x] = t - 32;
		}
	}
	return (a);
}
