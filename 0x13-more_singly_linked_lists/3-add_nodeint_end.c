#include "lists.h"

/**
 * add_nodeint_end - add a new_node node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: the address of the new_node element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *store_temp;

	(void)store_temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	store_temp = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (store_temp->next != NULL)
		{
			store_temp = store_temp->next;
		}
		store_temp->next = new_node;
	}

	return (*head);
}
