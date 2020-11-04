#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position..
 * @head: pointer to list head.
 * @idx: Position to insert node.
 * @n: Integer of node,
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	if (head)
	{
		tmp = *head;
		for (i = 0; i < idx; i++)
		{
			tmp = tmp->next;
			if !tmp
				return (NULL);
		}
		new = malloc (sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = tmp;
}
