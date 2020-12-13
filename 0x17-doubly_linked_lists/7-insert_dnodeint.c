#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head node of a list.
 * @idx: index of the new node.
 * @n: integer to add.
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new, *before;
	unsigned int i;

	if (*h)
	{
		if (idx == 0)
			return (add_dnodeint(h, n));
		for (i = 0; i < idx; i++)
		{
			tmp = tmp->next;
			if (!tmp && idx - 1 != i)
				return (NULL);
			else if (!tmp)
				return (add_dnodeint_end(h, n));
		}
		
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		before = tmp->prev;
		before->next = new;
		tmp->prev = new;
		new->n = n;
		new->next = tmp;
		new->prev = before;
		return (new);
	}
	return (NULL);
}
