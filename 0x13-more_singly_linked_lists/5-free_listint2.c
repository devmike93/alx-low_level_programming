#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_store;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp_store = current) != NULL)
		{
			current = current->next;
			free(temp_store);
		}
		*head = NULL;
	}
}
