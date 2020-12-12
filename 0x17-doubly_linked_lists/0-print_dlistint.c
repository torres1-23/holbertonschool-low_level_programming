#include "lists.h"

/**
 * print_dlistint - .prints all the elements of a list.
 * @h: head node of list.
 * Return:  number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t cont = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			cont++;
			h = h->next;
		}
	}
	return (cont);
}
