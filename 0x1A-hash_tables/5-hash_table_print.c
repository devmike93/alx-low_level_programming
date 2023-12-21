#include "hash_tables.h"

/**
 * hash_table_print - prints the contents of the hash table.
 * @ht: is the hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int first_node = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (!first_node)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			first_node = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
