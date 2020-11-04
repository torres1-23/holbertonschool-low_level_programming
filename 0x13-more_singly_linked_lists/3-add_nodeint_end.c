#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: pointer to last head.
 * @n: integer to add.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		tmp = *head;
		new->n = n;
		new->next = NULL;
		if (!tmp)
			*head = new;
		else
		{
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new;
		}
		return (new);
	}
	return (NULL);
}
