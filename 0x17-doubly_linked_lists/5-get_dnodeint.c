#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at a given index in
 *                         a doubly linked list.
 * @head: a pointer to the head of the doubly linked list.
 * @index: the index of the node to retrieve (0-based index).
 *
 * Return: A pointer to the node at the specified index;
 *         or NULL if the index is out of range.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	current = head;
	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}

	return (NULL);
}
