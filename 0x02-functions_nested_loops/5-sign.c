#include "main.h"
/**
 * print_sign - Prints the sign of a number.
 * @n: is the argument
 *
 * Return: 1 if pos, 0 if 0 and -1 if neg
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);

		return (0);
	}
	else
	{
		_putchar('-');

		return (-1);
	}
}
