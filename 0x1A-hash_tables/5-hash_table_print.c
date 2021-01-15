#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: pointer to hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head_copy = NULL;
	unsigned long int i;
	int fg = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (fg != 0)
				printf(", ");
			head_copy = ht->array[i];
			while (head_copy->next)
			{
				printf("'%s': '%s', ", head_copy->key, head_copy->value);
				head_copy = head_copy->next;
			}
			printf("'%s': '%s'", head_copy->key, head_copy->value);
			fg = 1;
		}
	}
	printf("}\n");
}
