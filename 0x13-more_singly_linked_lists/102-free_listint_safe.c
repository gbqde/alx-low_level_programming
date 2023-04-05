#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - This function frees a list in safe mode.
 * @h: The head of the list.
 *
 * Return: The size of the list.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *actual;
	size_t i = 0;
	ptrdiff_t rest;

	actual = *h;
	while (actual)
	{
		rest = actual - actual->next;
		if (rest > 0)
		{
			tmp = actual->next;
			free(actual);
			actual = tmp;
			i++;
		}

		else
		{
			free(actual);
			*h = NULL;
			i++;
			break;
		}
	}

	*h = NULL;
	return (i);
}
