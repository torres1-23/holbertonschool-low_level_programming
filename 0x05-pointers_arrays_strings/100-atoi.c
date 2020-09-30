#include <stdio.h>
#include "holberton.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 *
 * Return: the string converted to int.
 */

int _atoi(char *s)
{
	unsigned int i = 0, length = 0, sum = 0;
	unsigned int init, finish, num, d, sign;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (s[i] == '-')
			sign++;
		if (s[i] >= 48 && s[i] <= 57)
		{
			init = i;
			printf("%d\n", i);
			break;
		}
	}
	for (i; i < length; i++)
	{
		if (s[i] < 48 || s[i] > 57)
		{
			break;
		}
	}
	finish = i - 1;
	for (init; init <= finish; init++)
	{
		d = s[init] - '0';
		for (i = 0; i < finish - init ; i++)
			num = num * 10;
		num = num * d;
		sum = num + sum;
	}
	if (sign % 2 == 1)
		sum = -sum;
	return (sum);
}
