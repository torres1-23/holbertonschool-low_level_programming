#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list.
 * @head: head node of a list.
 * @n: integer to add to list node.
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!*head)
		new->next = NULL;
	else
	{
		new->next = tmp;
		tmp->prev = new;
	}
	new->n = n;
	new->prev = NULL;
	*head = new;
	return (new);
}
