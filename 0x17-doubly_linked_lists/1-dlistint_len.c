#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list.
 * @h: head node of a list.
 * Return: number of elements in a list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;

	if (h)
	{
		while (h)
		{
			cont++;
			h = h->next;
		}
	}
	return (cont);
}
