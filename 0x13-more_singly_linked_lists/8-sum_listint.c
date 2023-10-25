#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 * @head: head of a list.
 *
 * Return: the sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		return (head->n + sum_listint(head->next));
	}
}
