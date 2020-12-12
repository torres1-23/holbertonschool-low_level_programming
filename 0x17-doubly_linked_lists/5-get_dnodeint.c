#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a linked list.
 * @head: pointer to head node of a list.
 * @index: index of the node wanted.
 * Return: the nth node of a list or NULL if it fails.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i;

	if (head)
	{
		for (i = 0; i < index; i++)
			tmp = tmp->next;
		if (tmp)
			return (tmp);
	}
	return (NULL);
}
