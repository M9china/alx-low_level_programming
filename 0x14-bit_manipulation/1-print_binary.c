#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
    if (n > 1)
        print_binary(n >> 1);
    /* recursively calling print_binary with n right shifted by 1 bit */

    putchar((n & 1) + '0');
    /* printing the least significant bit using AND(n & 1) */
}

#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * Return: If big-endian - 0.
 * If little-endian - 1.
 */
int get_endianness(void)
{
    int num = 1;
    char *endian = (char *)&num;

    if (*endian == 1)
        return (1);

    return (0);
}

