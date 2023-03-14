#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: duplicates string
 *
 * Return: pointer to the copied string (Success, NULL (Error)
 *
 */

char *_strdup(const char *str)
{
	char *dup;
	unsigned int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	while (dup[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}

	return (dup);
}
