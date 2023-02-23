#include "main.h"
/**
 * print_last_digit - Entry point
 * &n: is the argument
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int i;
	if (n < 0) 
	{
		n = -n;
	}
	i = n % 10;

	if(i < 0)
	{
		i = -i;
	}
	_putchar(i + '0');

	return (i);
}
