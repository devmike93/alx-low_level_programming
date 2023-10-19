#include "lists.h"
/**
 * add_node - adds a ptr node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	size_t newchr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	(*ptr).str = strdup(str);

	for (newchr = 0; str[newchr]; newchr++)
		;

	(*ptr).len = newchr;
	(*ptr).next = *head;
	*head = ptr;

	return (*head);
}
