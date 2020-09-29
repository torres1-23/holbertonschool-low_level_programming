#include "holberton.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 *
 * Return: the string converted to int.
 */

int _atoi(char *s)
{
	unsigned int i = 0;
	unsigned int length;
	while (s[i] != '\0')
		length++;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			init = i;
			break;
		}
		i++;
	}
	while (s[init] >= '0' && s[init] <= '9' && s[init] != '\0')
	{
		pos = init;
		numb = s[init];
}
