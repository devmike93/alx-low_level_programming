#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list.
 * @head: a pointer to the head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;

	while (current != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
