#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: the pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv;
	listint_t *nxt;

	prv = NULL;
	nxt = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}

	*head = prv;
	return (*head);
}
