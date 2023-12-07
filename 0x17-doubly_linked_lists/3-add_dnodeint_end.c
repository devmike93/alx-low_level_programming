#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list.
 * @head: a pointer to a pointer to the head of the doubly linked list.
 * @n: the integer value to be stored in the new node.
 *
 * Return: a pointer to the newly created node;
 *         or NULL if memory allocation fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	new_node->prev = current;

	return (*head);
}
