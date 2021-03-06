#include "main.h"

/**
 * clear_bit - Sets a bit at specified index to zero
 * @n: Pointer to number to be represented as binary
 * @index: Bit index to get the value
 *
 * Return: 1 if succeds, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits_n = sizeof(*n) * 8;
	unsigned long int mask;

	if (index > bits_n)
		return (-1);

	mask = ~(1 << (index));
	*n = *n & mask;

	return (1);
}
