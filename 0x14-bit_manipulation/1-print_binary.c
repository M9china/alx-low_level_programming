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

