#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - A function that prints a linked list
 * with a loop safely.
 * @head: A pointer to the 1st node of the linked list
 * Return: The number of nodes printed
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_node = NULL;
	const listint_t *loop_node = NULL;
	size_t counter = 0;
	size_t loop_counter;

	tmp_node = head;
	while (tmp_node)
	{
		printf("[%p] %d\n", (void *)tmp_node, tmp_node->n);
		counter++;
		tmp_node = tmp_node->next;
		loop_node = head;
		loop_counter = 0;
		while (loop_counter < counter)
		{
			if (tmp_node == loop_node)
			{
				printf("-> [%p] %d\n", (void *)tmp_node, tmp_node->n);
				return (counter);
			}
			loop_node = loop_node->next;
			loop_counter++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
