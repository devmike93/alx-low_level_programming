#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *prev_node;
	listint_t *next_node;

	prev_node = *head;

	if (index != 0)
	{
		for (k = 0; k < index - 1 && prev_node != NULL; k++)
		{
			prev_node = prev_node->next_node;
		}
	}

	if (prev_node == NULL || (prev_node->next_node == NULL && index != 0))
	{
		return (-1);
	}

	next_node = prev_node->next_node;

	if (index != 0)
	{
		prev_node->next_node = next_node->next_node;
		free(next_node);
	}
	else
	{
		free(prev_node);
		*head = next_node;
	}

	return (1);
}
