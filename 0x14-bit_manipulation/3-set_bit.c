#include "main.h"

/** set_bit - sets bit at index to 1
 * @n: pointer to index
 * @index: position of a bit
 *
 * Return: 1 on success, or -1 if fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	j = 1 << index;
	*n = *n | j;

	return (1);
}
