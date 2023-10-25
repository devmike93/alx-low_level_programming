#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *cur_node;
	listp_t *tmp_node;

	if (head != NULL)
	{
		cur_node = *head;
		while ((tmp_node = cur_node) != NULL)
		{
			cur_node = cur_node->next;
			free(tmp_node);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	listp_t *ptr_h, *new_node, *add;

	ptr_h = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = ptr_h;
		ptr_h = new_node;

		add = ptr_h;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr_h);
				return (num_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num_nodes++;
	}

	free_listp(&ptr_h);
	return (num_nodes);
}
