#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Frees a linked list of integers.
 *
 * @head: A pointer to the head of the linked list.
 *
 * Description:
 *    This function frees all the memory associated with a linked list of
 *    integers. It iterates through the list and frees each node one by one.
 *
 * Return: void
 */

void free_listint(listint_t *head)

{
	listint_t *current, *next;

	current = head;

	while (current != NULL)

	{
		next = current->next;
		free(current);
		current = next;
	}
}
