#include <stdio.h>
#include <math.h>
#include "holberton.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 *
 * Return: the string converted to int.
 */

int _atoi(char *s)
{
	int i = 0, length = 0, sum = 0;
	int init, finish, num, d, sign;

	while (str[length] != '\0')
	{
		lenght++;
	}
	for (i = 0; i < lenght; i++)
	{
		if (str[i] == '-')
			sign++;
		if (str[i] >= 48 && str[i] <= 57)
		{
			init = i;
			printf("%d\n", i);
			break;
		}
	}
	for (; i < lenght; i++)
	{
		if (str[i] < 48 || str[i] > 57)
		{
			break;
		}
	}
	finish = i - 1;
	for (init; init <= finish; init++)
	{
		d = str[init] - '0';
		num = pow(10, finish - init) * d;
		sum = num + sum;
	}
	if (sign % 2 == 1)
		sum = -sum;
	return (sum);
}
