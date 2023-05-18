#include "lists.h"

/**
 * free_dlistint - Frees every node in a doubly linked list.
 * @head: Pointer to the head of the list to be freed.
 * Author: gbade moses (@gbqde)
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
