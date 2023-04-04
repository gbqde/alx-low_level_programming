#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head of a listint_t linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int data;

	if (head == NULL)
		return (0);

	temp_node = *head;
	if (temp_node == NULL)
		return (0);

	data = temp_node->n;
	*head = temp_node->next;
	free(temp_node);
	return (data);
}
