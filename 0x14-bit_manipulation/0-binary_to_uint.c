#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars
 *
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int decimal, base;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (len--; len >= 0; len--, base *= 2)
	{
		if (b[len] == '1')
			decimal += base;
	}

	return (decimal);
}
