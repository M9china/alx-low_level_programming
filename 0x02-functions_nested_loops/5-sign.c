#include "main.h"
/**
 * print_sign - Entry point
 * &n: is an argument
 *
 * Return: 1 if pos, 0 if 0 and -1 if neg
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");

		return (1);
	}
	else if (n == 0)
	{
		printf("0");

		return (0);
	}
	else
	{
		print("-");

		return (-1);
	}
}
