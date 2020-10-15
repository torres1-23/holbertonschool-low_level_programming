#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: size of char.
 * @size: string to print.
 *
 * Return: NULL if nmemb or size = 0 or malloc fails, else a pointer to the
 * allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		mem[i] = 0;
	return (mem);
}
