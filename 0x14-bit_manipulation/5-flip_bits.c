#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 * one number to another.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that differ between the two numbers.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int xorResult = n ^ m;
	unsigned int numFlips = 0;

	while (xorResult != 0)
	{
		numFlips += (xoResult & 1);
		xoResult >>= 1;
	}

	return (numFlips);
}
