#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: head node of a list.
 * @n: integer to add to list node.
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		new->prev = tmp;
		tmp->next = new;
	}
	new->n = n;
	new->next = NULL;
	return (new);
}
