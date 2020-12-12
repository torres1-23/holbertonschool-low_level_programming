#include "lists.h"

/**
 * sum_dlistint - sums of all the data (n) of a linked list.
 * @head: pointer to head node of a list.
 * Return: returns the sum of all the data.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (head)
	{
		while (tmp)
		{
			sum += tmp->n;
			tmp = tmp->next;
		}
	}
	return (sum);
}
