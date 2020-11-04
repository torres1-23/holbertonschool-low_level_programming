#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked.
 * @h: list to print.
 *
 * Return: the number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	int i;

	if (h)
	{
		while (h)
		{
			i++;
			h = h->next;
		}
	}
	return (i);
}
