#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main -  Entry point.
 * @argc: size of argv.
 * @argv: size of command arguments.
 *
 * Description: prints its name, followed by a new line.
 * Return: 0 if succes.
 */

int main(int argc, char *argv[])
{
	int n1, n2, m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		m = n1 * n2;
		printf("%d\n", m);
		return (0);
	}
}
