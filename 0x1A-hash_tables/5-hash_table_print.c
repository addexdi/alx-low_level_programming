#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp;
	char flag = 0;

	if (!ht || !ht->array)
		return;

	printf("{");
	for (; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
