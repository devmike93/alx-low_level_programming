#include "lists.h"

/**
 * sum_dlistint - computes the sum of all integer values in a d-linked list
 * @head: is a pointer to the head of the doubly linked list.
 *
 * Return: the sum of all integer values in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
