#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the jump search algorithm.
 * @list: pointer to the head of the list to search in.
 * @size: number of nodes in list.
 * @value: value to search for.
 * Return: a pointer to the first node where value is located, or -1 on error.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	unsigned int step = 0, prev = 0, i;
	listint_t *low = list;

	if (list != NULL)
	{
		while (list->next && list->n < value && prev < size)
		{
			low = list;
			prev = list->index;
			step += sqrt(size);
			for (i = prev; i < step; i++)
			{
				list = list->next;
				if (list->next == NULL)
					break;
			}
			printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		low->index, list->index);
		for (i = low->index; i <= list->index; i++)
		{
			if (i < size)
			{
				printf("Value checked at index [%d] = [%d]\n", i, low->n);
				if (low->n == value)
					return (low);
				low = low->next;
			}
			else
				break;
		}
	}
	return (NULL);
}
