#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specified index
 *                            in a doubly linked list.
 * @head: a pointer to a pointer to the head of the doubly linked list.
 * @index: the index of the node to be deleted (0-based index).
 *
 * Return: 1 if the node is successfully deleted;
 *         -1 if the index is out of range or if the list is empty.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int current_idx = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	while (current != NULL && current_idx < index)
	{
		current = current->next;
		current_idx++;
	}

	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;
	else
		*head = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);

	return (1);
}
