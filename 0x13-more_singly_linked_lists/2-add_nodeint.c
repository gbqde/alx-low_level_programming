#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 *
 * @head: A pointer to a pointer to the head of the list.
 * @n: The value to be added to the new node.
 *
 * Return: On success, a pointer to the new node. On failure, NULL.
 */


listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

