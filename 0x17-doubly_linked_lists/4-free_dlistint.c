#include "lists.h"

/**
 * free_dlistint - frees a list.
 * @head: pointer to head node of a list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head, *new_head = head;

	if (head)
	{
		while (tmp)
		{
			new_head = tmp;
			tmp = tmp->next;
			free(new_head);
		}
	}
}
