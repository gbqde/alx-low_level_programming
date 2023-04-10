/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to set (starting from 0).
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int msk;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	msk = ~(1UL << index);
	*n &= msk;

	return (1);
}
