#include <stdio.h>
#include "holberton.h"

/**
 * main -  Entry point.
 * @argc: size of argv.
 * @argv: size of command arguments.
 *
 * Description: prints all arguments it receives.
 * Return: 0 if succes.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
