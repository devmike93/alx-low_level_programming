#include "lists.h"

/**
 * find_listint_loop - tortoise and hare, finds the loop
 * @head: head of a list.
 * Return: address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr_2w; /*twice as fast*/
	listint_t *ptr_loc;

	ptr_2w = head;
	ptr_loc = head;
	while (head && ptr_2w && ptr_2w->next)
	{
		head = head->next;
		ptr_2w = ptr_2w->next->next;

		if (head == ptr_2w)
		{
			head = ptr_loc;
			ptr_loc =  ptr_2w;
			while (1)
			{
				ptr_2w = ptr_loc;
				while (ptr_2w->next != head && ptr_2w->next != ptr_loc)
				{
					ptr_2w = ptr_2w->next;
				}
				if (ptr_2w->next == head)
					break;

				head = head->next;
			}
			return (ptr_2w->next);
		}
	}

	return (NULL);
}
