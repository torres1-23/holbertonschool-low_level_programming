#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer to hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *copy_head = NULL, *tmp_node = NULL;
	unsigned long int i;
	
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			copy_head = ht->array[i];
			while (copy_head)
			{
				tmp_node = copy_head->next;
				free(copy_head->key);
				free(copy_head->value);
				free(copy_head);
				copy_head = tmp_node;
			}
		}
	}
	free(ht->array);
	free(ht);
}
