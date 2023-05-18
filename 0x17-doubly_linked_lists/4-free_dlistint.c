#include "lists.h"

/**
 * free_dlistint - This frees a dlistint_t list
 *
 * @head: The head of the list
 * Return: no return
 *
 * Author: Gbade Moses (@gbqde)
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
