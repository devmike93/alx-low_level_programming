#include "lists.h"
/**
 * free_listp2 - helperfxn that frees stuff
 * @head: first node of a list.
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *ptr_temp;
	listp_t *ptr_curr;

	if (head != NULL)
	{
		ptr_curr = *head;
		while ((ptr_temp = ptr_curr) != NULL)
		{
			ptr_curr = ptr_curr->next;
			free(ptr_temp);
		}
		*head = NULL;
	}
}
/**
 * free_listint_safe - frees a linked list.
 * @h: first node of a list.
 * Return: the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t freed_nodes = 0;
	listp_t *stack_top = NULL;
	listint_t *current_node;
	listp_t *temp;

	while (*h != NULL)
	{
		listp_t *new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)*h;
		new_node->next = stack_top;
		stack_top = new_node;

		temp = stack_top;

		while (temp->next != NULL)
		{
			temp = temp->next;
			if (*h == temp->p)
			{
				*h = NULL;
				while (stack_top != temp)
				{
					listp_t *to_free = stack_top;

					stack_top = stack_top->next;

					free(to_free);
				}
				free_listp2(&stack_top);
				return (freed_nodes);
			}
		}
		current_node = *h;
		*h = (*h)->next;
		free(current_node);
		freed_nodes++;
	}
	*h = NULL;
	free_listp2(&stack_top);
	return (freed_nodes);
}
