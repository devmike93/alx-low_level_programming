#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *curNode;

	while ((curNode = head) != NULL)
	{
		head = head->next;
		free(curNode->str);
		free(curNode);
	}
}
