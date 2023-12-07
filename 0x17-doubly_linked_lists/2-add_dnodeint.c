#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list.
 * @head: a pointer to a pointer to the head of the doubly linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly created node;
 *         or NULL if memory allocation fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (*head);
}
