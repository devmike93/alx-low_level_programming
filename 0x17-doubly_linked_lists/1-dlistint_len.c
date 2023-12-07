#include "lists.h"

/**
 * dlistint_len - computes the length (number of nodes) of a doubly linked list
 * @h: is a pointer to the head of the doubly linked list.
 *
 * Return: the number of nodes in the doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
