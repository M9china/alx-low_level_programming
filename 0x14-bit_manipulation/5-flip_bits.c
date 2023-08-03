#include "main.h"

/**
 * flip_bits - flips a number of bits
 * @n: number to get to
 * @m: number of bits
 *
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, answer;
	unsigned int a, b;

	a = 0;
	answer = 1;
	difference = n ^ m;
	for (b = 0; b < (sizeof(unsigned long int) * 8); b++)
	{
		if (answer == (difference & answer))
			a++;
		answer <<= 1;
	}

	return (a);
}

