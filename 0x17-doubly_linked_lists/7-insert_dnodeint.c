#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a specified index
 *                            in a doubly linked list.
 * @h: a pointer to a pointer to the head of the doubly linked list.
 * @idx: the index at which the new node should be inserted (0-based index).
 * @n: is the integer value to be stored in the new node.
 *
 * Return: a pointer to the newly inserted node;
 *         or NULL if memory allocation fails or if the index is out of range.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int current_idx = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{ /* Insert at the beginnig of the list */
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	current = *h;
	while (current != NULL && current_idx < idx - 1)
	{
		current = current->next;
		current_idx++;
	}

	if (current == NULL)
	{ /* Index out of range */
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
