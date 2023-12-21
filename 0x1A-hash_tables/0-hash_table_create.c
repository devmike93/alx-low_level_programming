#include "hash_tables.h"

/**
 * hash_table_create - create a new hash table.
 * @size: is the size of the array.
 *
 * Return: A pointer to the newly created hash table;
 *         otherwise NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	hash = malloc(sizeof(hash_table_t));
	if (!hash)
		return (NULL);

	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash->array)
	{
		free(hash);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash->array[i] = NULL;
	hash->size = size;

	return (hash);
}
