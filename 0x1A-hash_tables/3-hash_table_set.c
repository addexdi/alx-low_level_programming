#include "hash_tables.h"

/**
 * hash_table_set- This function adds an element to the hash table.
 * @ht: pointer to the an hash table created earlier.
 * @key: the key that will be used in djb2 function to get an index.
 * @value: the corresponding value to the key.
 *
 * Return: on malloc failure returns NUll or 0 otherwise retuens 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new;
	char *value_dub;
	char *key_dub;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	key_dub = strdup(key);
	if (key_dub == NULL)
		return (0);
	value_dub = strdup(value);
	if (value_dub == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_dub;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		free(value_dub);
		return (0);
	}
	new->key = key_dub;
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_dub;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
