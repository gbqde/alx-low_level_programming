#include "lists.h"

/**
 * dlistint_len - This returns the number of elements in
 * a double linked list
 *
 * @h: The head of the list
 * Return: The number of nodes
 *
 * Author: Gbade Moses (@gbqde)
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
