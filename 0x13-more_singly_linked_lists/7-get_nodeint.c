#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a linked list.
 * @head: pointer to list head.
 * @index: index of the node.
 *
 * Return: the head node’s data (n).
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head)
	{
		for (i = 0; i < index; i++)
		{
			head = head->next;
			if (!head)
				return (NULL);
		}
		return (head);
	}
	return (NULL);
}
