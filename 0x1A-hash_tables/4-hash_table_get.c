#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to hash table to get value.
 * @key: key to search for.
 *
 * Return: pointer to value if success, NULL if failure.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head_copy = NULL;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	head_copy = ht->array[index];
	while (head_copy)
	{
		if (strcmp(head_copy->key, key) == 0)
			return (head_copy->value);
		head_copy = head_copy->next;
	}
	return (NULL);
}
