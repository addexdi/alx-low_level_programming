#include "hash_tables.h"

/**
 * hash_table_get -A function that gets value from hash table
 *
 * @ht: A pointer to hash table to get value from
 * @key: The key to get value from hash table.
 * Return: A char* value from hash table, NULL if value not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index = 0;

	if (!ht || !key || ht->size == 0 || key == NULL ||
	    strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[index] == NULL)
		return (NULL);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
