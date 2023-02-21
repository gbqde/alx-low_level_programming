#include "main.h"

/**
 * print_last_digit - a funtion that prints the last digit number
 *
 * @n: the number to extract from
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
