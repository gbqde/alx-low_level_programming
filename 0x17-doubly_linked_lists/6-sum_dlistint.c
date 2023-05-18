#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all values in a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all the values in the list.
 * Author: gbade moses (@gbqde)
 */

int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (count);
	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
