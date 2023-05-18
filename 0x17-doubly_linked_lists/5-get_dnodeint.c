#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node value at a specified 
 * index in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to retrieve.
 *
 * Return: The node at the specified index, or NULL if the index is out of range.
 * Author: gbade moses (@gbqde)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (index)
	{
		if (head->next != NULL)
			head = head->next;
		else
			return (NULL);
		index--;
	}
	return (hea
