#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: pointer to the head node of the linked list
 * @index: index of the node to return
 *
 * Return: On success, pointer to the nth node of the list. On failure, NULL
 * indicating that the index is out of range or that the list is empty.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;

	if (head == NULL)
		return (NULL);

	current_node = head;

	while (index != 0)
	{
		current_node = current_node->next;
		index--;

		if (current_node == NULL)
			return (NULL); /* out of range */
	}

	return (current_node);
}
