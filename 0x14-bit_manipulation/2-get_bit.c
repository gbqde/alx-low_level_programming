#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: The number to evaluate.
 * @index: The index of the bit we want to get (starting from 0).
 *
 * Return: The value of the bit at the given index, or -1 if an error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	/* Check if the index is greater than 64 bits. */
	if (index > 64)
		return (-1);

	hold = n >> index;

	/* Return the value of the bit at the given index. */
	return (hold & 1);
}
