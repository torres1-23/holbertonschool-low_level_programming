#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 * @a: char to capitalize words
 *
 * Return: char whit capitalizaed words.
 */

char *cap_string(char *a)
{
	int i = 0, j = 0;
	int y;
	int aft;
	char s[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (s[j] != '\0')
		j++;
	while (a[i] != '\0')
	{
		for (y = 0; y < j; y++)
		{
			aft = i + 1;
			if (a[i] == s[y])
				if (a[aft] >= 97 && a[aft] <= 122)
					a[aft] = a[aft] - 32;
		}
		i++;
	}
	return (a);
}
