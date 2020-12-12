#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: head node of a list.
 * @index: index of the node to delete.
 * Return: 1 if success, else 0.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i;

	if (*head)
	{
		if (index == 0)
		{
			*head = tmp->next;
			if (tmp->next)
				tmp->next->prev = NULL;
		}
		else
		{
			for (i = 0; i < index; i++)
			{
				tmp = tmp->next;
				if (!tmp)
					return (-1);
			}
			if (tmp->next == NULL)
				tmp->prev->next = NULL;
			else
			{
				tmp->next->prev = tmp->prev;
				tmp->prev->next = tmp->next;
			}
		}
		free(tmp);
		return (1);
	}
	return (-1);
}
