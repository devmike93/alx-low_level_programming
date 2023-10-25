#include "lists.h"

/**
 * delete_nodeint_at_index - dels node of LL
 * @head: head of a LL.
 * @index: index of deleted node
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *prev_h;
	listint_t *del_node;

	prev_h = *head;

	if (index != 0)
	{
		for (k = 0; k < index - 1 && prev_h != NULL; k++)
		{
			prev_h = prev_h->del_node;
		}
	}

	if (prev_h == NULL || (prev_h->del_node == NULL && index != 0))
	{
		return (-1);
	}

	del_node = prev_h->del_node;

	if (index != 0)
	{
		prev_h->del_node = del_node->del_node;
		free(del_node);
	}
	else
	{
		free(prev_h);
		*head = del_node;
	}

	return (1);
}
