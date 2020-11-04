#include "lists.h"

/**
 * free_listint2 - frees a list, and sets head to NULL.
 * @head: pointer to list to free.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
	}
	*head = NULL;
}
