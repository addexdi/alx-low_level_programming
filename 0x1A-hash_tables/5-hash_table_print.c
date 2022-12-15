#include "hash_tables.h"

/**
 * hash_table_print- this function prints a hash table.
 *
 *@ht: pointer to the hash table.
 *Return: return value is void.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new;
	unsigned long int i;
	unsigned char comma;

	comma = 0;
	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{

		if (ht->array[i] != NULL)
		{
			if (comma == 1)
				printf(", ");
			new = ht->array[i];
			while (new != NULL)
			{
				printf("'%s': '%s'", new->key, new->value);
				new = new->next;
				if (new != NULL)
				{
					printf(", ");
				}
			}
			comma = 1;
		}
	}
	printf("}\n");
}
