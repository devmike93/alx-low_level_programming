#include "lists.h"


/**
 * free_listint_safe - fxn to free a linked list
 * @h: first node of list(head).
 * Return: nodesize that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodesize = 0;
	listint_t *ptr_cur;
	listint_t *stack = NULL;

	while (*h != NULL)
	{
		ptr_cur = *h;
		*h = (*h)->next;

		ptr_cur->next = stack;
		stack = ptr_cur;
	}

	while (stack != NULL)
	{
		ptr_cur = stack;
		stack = stack->next;

		free(ptr_cur);
		nodesize++;
	}

	*h = NULL;
	return (nodesize);
}
