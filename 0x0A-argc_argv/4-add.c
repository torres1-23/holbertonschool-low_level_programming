#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main -  Entry point.
 * @argc: size of argv.
 * @argv: size of command arguments.
 *
 * Description: adds positive numbers..
 * Return: 0 if success.
 */

int main(int argc, char *argv[])
{
	int i, d, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			d = atoi(argv[i]);
			if (argv[i][0] != '0' && d == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += d;
		}
		printf("%d\n", sum);
	}
	return (0);
}
