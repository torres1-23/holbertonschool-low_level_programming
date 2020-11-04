#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: list to print.
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h)
	{
		while (h)
		{
			printf("%i\n", h->n);
			i++;
			h = h->next;
		}
	}
	return (i);
}
