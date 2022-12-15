#include "hash_tables.h"

/**
 *hash_table_get- this function gets the associated value to a key.
 *
 * @ht: pointer to an array of hash table created.
 * @key: key to be used to get index.
 *
 * Return: return the char value on success or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	new = ht->array[index];
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (strcmp(new->key, key) != 0 && new)
	{
		new = new->next;
	}

	return ((new) ? (new->value) : NULL);
}
