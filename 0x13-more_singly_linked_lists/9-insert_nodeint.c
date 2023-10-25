#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new_node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new_node is
 * added.
 * @n: integer element.
 * Return: address of the new_node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *new_node;
	listint_t *h_temp;

	h_temp = *head;

	if (idx != 0)
	{
		for (k = 0; k < idx - 1 && h_temp != NULL; k++)
		{
			h_temp = h_temp->next;
		}
	}

	if (h_temp == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = h_temp->next;
		h_temp->next = new_node;
	}

	return (new_node);
}
