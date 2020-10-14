#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments.
 * @av: content of arguments.
 *
 * Return: a pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	char *arr;
	int i, j, p = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	arr = malloc((sizeof(char *) * ac) + ac);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			arr[p] = av[i][j];
			j++;
			p++;
		}
		arr[p] = '\n';
		p++;
	}
	return (arr);
}
