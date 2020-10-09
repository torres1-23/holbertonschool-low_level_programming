#include <stdio.h>
#include "holberton.h"

/**
 * main -  Entry point.
 * @argc: size of argv.
 * @argv: size of command arguments.
 *
 * Description: prints its name, followed by a new line.
 * Return: 0 if succes.
 */

int main (int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return(0);
}
