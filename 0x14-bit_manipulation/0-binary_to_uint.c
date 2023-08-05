#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - Converts a binary number represented.
 * @b: Pointer to a string of '0' and '1' .
 *
 * Return: unsigned integer,
 * or 0 if the input is invalid.
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}

	for (a = 0; b[a] != '\0'; a++)
	{
		result <<= 1;
		if (b[a] == '1')
			result += 1;
	}

	return (result);
}

