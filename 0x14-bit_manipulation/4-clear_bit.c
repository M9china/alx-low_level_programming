#include "main.h"

/**
 * clear_bit - sets a value of it to 0
 * @n: pointer to index
 * @index: position of a bit
 *
 * Return: 1 on SUCCESS, or 0 if fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	j = ~(1 << index);
	*n = *n & j;

	return (1);
}

