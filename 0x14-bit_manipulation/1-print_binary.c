#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	char binary[65];  
	int index = 0;
	int leading_zeros = 1; 

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (index < 64)
	{
		binary[index] = (n & 0x8000000000000000UL) ? '1' : '0';
		if (binary[index] == '1')
			leading_zeros = 0;
		n <<= 1;
		index++;
	}

	binary[index] = '\0';

	if (leading_zeros)
		binary[index - 1] = '0';

	_putchar(binary);
}

