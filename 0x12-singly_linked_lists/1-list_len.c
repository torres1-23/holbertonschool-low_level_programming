#include "lists.h"

/**
 * list_len - eturns the number of elements in a linked.
 * @h: list to print.
 *
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	if (h)
	{
		while (h)
		{
			h = h->next;
			i++;
		}
	}
	return (i);
}
