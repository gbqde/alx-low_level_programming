#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: Pointer to the head of the list.
 * @n: The integer to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */


listint_t *add_nodeint_end(listint_t **head, const int n)

{

	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		last_node = *head;
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
