#include "lists.h"

/**
 * add_node_end - adds a fresh node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh, *store;
	size_t newchr;

	fresh = malloc(sizeof(list_t));
	if (fresh == NULL)
		return (NULL);

	fresh->str = strdup(str);

	for (newchr = 0; str[newchr]; newchr++)
		;

	fresh->len = newchr;
	fresh->next = NULL;
	store = *head;

	if (store)
	{
		while (store->next != NULL)
			store = store->next;
		store->next = fresh;
	}
	else
	{
		*head = fresh;
	}

	return (*head);
}
