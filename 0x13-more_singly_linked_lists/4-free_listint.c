#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: pointer to list to free..
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head)
	{
		while (head)
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
	}
}
