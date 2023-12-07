#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list.
 * @h: is a pointer to the head of the doubly linked list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
