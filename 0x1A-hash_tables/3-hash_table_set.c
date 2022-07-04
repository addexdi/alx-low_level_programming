#include "hash_tables.h"
/**
 * hash_table_set - A function that sets a key value pair in the hash
 *
 * @ht: A pointer to a hash table to set in
 * @key: The key to set in hash table
 * @value: The value to set as hash_node's value.
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *value_dup = NULL, *key_dup = NULL;
	hash_node_t *node = NULL, *temp = NULL;

	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	value_dup = strdup(value);
	key_dup = strdup(key);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = key_dup;
	node->value = value_dup;
	node->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[index] != NULL)
	{
		temp = (ht->array[index]);
		while (temp)
		{
			if (strcmp(temp->key, key_dup) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = value_dup;
				free(key_dup);
				free(node);
				return (1);
			}
			temp = temp->next;
		}
		temp = (ht->array)[index];
		node->next = temp;
		ht->array[index] = node;
	}
	else
		(ht->array)[index] = node;
	return (1);
}
