#include "lists.h"

/**
 * print_list - prints all the elements of a list.
 * @h: list to print.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	if (h)
	{
		while (h)
		{
			if (!h->str)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}
