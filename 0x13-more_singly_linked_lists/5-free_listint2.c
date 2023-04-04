#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to a pointer to the head node of the listint_t list.
 *
 * This function frees a listint_t list, setting the head to NULL.
 * It frees each node in the list using a temporary pointer to traverse
 * the list, starting at the head. The head is set to NULL before the
 * function returns to prevent any further access to the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	/* Check if the list is empty or NULL */
	if (head == NULL || *head == NULL)
		return;

	/* Traverse the list, freeing each node */
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	/* Set the head to NULL to prevent further access to the list */

	*head = NULL;
}
