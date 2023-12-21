#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - create a sorted hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created sorted hash table or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	new_ht = malloc(sizeof(shash_table_t));
	if (new_ht == NULL)
		return (NULL);

	new_ht->array = malloc(sizeof(shash_node_t *) * size);
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;

	new_ht->shead = NULL;
	new_ht->stail = NULL;
	new_ht->size = size;

	return (new_ht);
}

/**
 * shash_table_set - inserts a key/value pair into the sorted hash table
 * @ht: is the sorted hash table to insert into
 * @key: is the key for the element
 * @value: is the value associated with the key
 *
 * Return: 1 if the operation succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	/* Check if a node with the same key already exists */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}

	/* Create a new node for the key/value pair */
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	/* Insert the new node into the sorted linked list */
	if (ht->shead == NULL || strcmp(ht->shead->key, key) > 0)
	{
		new_node->snext = ht->shead;
		new_node->sprev = NULL;
		if (ht->shead != NULL)
			ht->shead->sprev = new_node;
		else
			ht->stail = new_node;
		ht->shead = new_node;
	}
	else
	{
		current = ht->shead;
		while (current->snext != NULL && strcmp(current->snext->key, key) < 0)
			current = current->snext;
		new_node->snext = current->snext;
		new_node->sprev = current;
		if (current->snext == NULL)
			ht->stail = new_node;
		else
			current->snext->sprev = new_node;
		current->snext = new_node;
	}

	return (1);
}

/**
 * shash_table_get - retrieves the value associated with a key in a sorted
 *                   hash table.
 * @ht: is the sorted hash table to look into
 * @key: is the key to search for
 *
 * Return: the value associated with the key or NULL if key couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse order
 * @ht: the sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	for (current = ht->stail; current != NULL; current = current->sprev)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print - prints a sorted hash table using the sorted linked list
 * @ht: is the sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	for (current = ht->shead; current != NULL; current = current->snext)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table and its associated data
 * @ht: the sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *next;

	if (ht == NULL)
		return;

	current = ht->shead;
	while (current != NULL)
	{
		next = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}

	free(ht->array);
	free(ht);
}
