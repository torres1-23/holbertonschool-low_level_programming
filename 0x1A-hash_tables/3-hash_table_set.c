#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to hash table to add/update key/value.
 * @key: key to add/update
 * @value: value to add/update.
 *
 * Return: 1 if success, 0 if failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *head_copy = NULL;
	unsigned long int index;

	if (!key || !ht || *key == '\0')
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	if (ht->array[index])
	{
		head_copy = ht->array[index];
		while (head_copy)
		{
			if (strcmp(head_copy->key, key) == 0)
			{
				free(head_copy->value);
				head_copy->value = strdup(value);
				if (head_copy->value)
					return (0);
				return (1);
			}
			head_copy = head_copy->next;
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = (char *) key;
	new_node->value = strdup(value);
	if (!new_node->value)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
