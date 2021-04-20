#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * using the jump search algorithm.
 * @list: pointer to the head of the skip list to search in.
 * @value: value to search for.
 * Return: a pointer to the first node where value is located, or -1 on error.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	unsigned int i;
	skiplist_t *low = list;

	if (list != NULL)
	{
		while (list->express && list->n < value)
		{
			low = list;
			list = list->express;
			printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		}
		if (list->n < value)
		{
			low = low->express;
			while (list->next)
				list = list->next;
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		low->index, list->index);
		for (i = low->index; i <= list->index; i++)
		{
			printf("Value checked at index [%d] = [%d]\n", i, low->n);
			if (low->n == value)
				return (low);
			low = low->next;
		}
	}
	return (NULL);
}
