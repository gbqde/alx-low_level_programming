#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked listint_t list
 * @head: Pointer to the head node of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t listint_len(const listint_t *head)
{
	size_t node_count = 0;

	while (head)
	{
		head = head->next;
		node_count++;
	}

	return (node_count);
}

