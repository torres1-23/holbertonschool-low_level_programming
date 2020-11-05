#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to list head.
 * @index: Position to delete node.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *nxt;
	unsigned int i;

	if (*head)
	{
		tmp = *head;
		for (i = 1; i < index; i++)
		{
			tmp = tmp->next;
			if (!tmp)
				return (-1);
		}
		if (index == 0)
		{
			*head = (*head)->next;
			free(tmp);
		}
		else
		{
			nxt = tmp->next;
			tmp->next = nxt->next;
		}
		free(nxt);
		return (1);
	}
	return (-1);
}
